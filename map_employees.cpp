/*
* Южный федеральный университет, ИКТИБ, кафедра МОП ЭВМ
* Гатауллин Руслан Рустемович
* Написано 02.10.2020
*/

#include <set>
#include <iomanip>
#include "map_employees.h"


template <typename T>
Map_employees<T>::Map_employees(const std::vector<Employee> &emp)
{
    for (auto &employee : emp)
        _emp.insert(std::make_pair(employee.get_birth_year(), employee));
}

template <typename T>
std::multimap<unsigned short, Employee> &Map_employees<T>::get_employees()
{
    return _emp;
}

template <typename T>
void Map_employees<T>::add_employees(const Employee &add)
{
    _emp.insert(std::make_pair(add.get_birth_year(), add));
}

template <typename T>
void Map_employees<T>::add_employees(const std::vector<Employee> &add)
{
    for (auto &emp : add)
        _emp.insert(std::make_pair(emp.get_birth_year(), emp));
}

template <typename T>
std::vector<Employee> Map_employees<T>::find(T& pattern)
{
    std::vector<Employee> ans;

    auto itm = _emp.find(pattern);
    int f_count = _emp.count(pattern);
    for (int i = 0; i < f_count; ++i)
    {
        ans.push_back(itm->second);
        itm++;
    }
    return ans;
}

template<typename T>
std::vector<Employee> Map_employees<T>::find_retired_in_year(unsigned short year)
{
    std::vector<Employee> ans;
    auto itm = _emp.find(year - 65);
    int count = _emp.count(year - 65);
    for (int i = 0; i < count; ++i)
    {
        if (itm->second.get_gender() == MALE) ans.push_back(itm->second);
        itm++;
    }

    itm = _emp.find(year - 55);
    count = _emp.count(year - 55);
    for (int i = 0; i < count; ++i)
    {
        if (itm->second.get_gender() == FEMALE) ans.push_back(itm->second);
        itm++;
    }
    return ans;
}

template <typename T>
std::istream &operator>>(std::istream &is, Map_employees<T> &emp)
{
    const std::set<std::string> females_str = {"жен", "fem", "female", "женщина", "Ж", "ж"};
    const std::set<std::string> males_str = {"муж", "male", "мужчина", "М", "м"};
    std::string input;
    while (getline(is, input) && !input.empty())
    {
        std::istringstream buf(input);

        std::string fio;
        std::string str;
        for (int i = 0; i < 3; ++i)
        {
            if (buf >> str)
                fio.append(str + ((i == 2) ? "" : " "));
            else
                throw std::runtime_error(INC_IN);
        }

        std::string post;
        if (!(buf >> post))
            throw std::runtime_error(INC_IN);

        std::string str_gender;
        Gender gender;
        if (!(buf >> str_gender))
            throw std::runtime_error(INC_IN);

        if (males_str.count(str_gender))
            gender = MALE;
        else if (females_str.count(str_gender))
            gender = FEMALE;
        else throw std::runtime_error(INC_IN);


        unsigned short start_work;
        if (!(buf >> start_work))
            throw std::runtime_error(INC_IN);

        unsigned short birth_year;
        if (!(buf >> birth_year))
            throw std::runtime_error(INC_IN);

        char is_incorrect;
        if (buf >> is_incorrect)
            throw std::runtime_error(INC_IN);

        emp.get_employees().emplace(birth_year, Employee(fio, post, gender, start_work, birth_year));
    }
    return is;
}
