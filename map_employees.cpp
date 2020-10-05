/*
* Южный федеральный университет, ИКТИБ, кафедра МОП ЭВМ
* Гатауллин Руслан Рустемович
* Написано 02.10.2020
*/

template <typename T>
Map_employees<T>::Map_employees(const std::multimap<T, Employee> &emp)
{
    for (auto &employee : emp)
        _emp.insert(employee);
}

template <typename T>
std::multimap<T, Employee> &Map_employees<T>::get_employees()
{
    return _emp;
}

template <typename T>
void Map_employees<T>::add_employee(std::pair<T, Employee>&& to_add)
{
    _emp.insert(to_add);
}

template <typename T>
void Map_employees<T>::add_employees(const std::multimap<T, Employee> &add)
{
    for (auto &emp : add)
        _emp.insert(emp);
}

template <typename T>
std::vector<Employee> Map_employees<T>::find(T&& pattern)
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

//template<typename T>
//std::vector<Employee> Map_employees<T>::find_retired_in_year(unsigned short year)
//{
//    std::vector<Employee> ans;
//    auto itm = _emp.find(year - 65);
//    int count = _emp.count(year - 65);
//    for (int i = 0; i < count; ++i)
//    {
//        if (itm->second.get_gender() == MALE) ans.push_back(itm->second);
//        itm++;
//    }
//
//    itm = _emp.find(year - 55);
//    count = _emp.count(year - 55);
//    for (int i = 0; i < count; ++i)
//    {
//        if (itm->second.get_gender() == FEMALE) ans.push_back(itm->second);
//        itm++;
//    }
//    return ans;
//}

std::istream &operator>>(std::istream &is, Map_employees<unsigned short> &emp)
{
    Employee in;
    while (is >> in)
        emp.get_employees().emplace(in.get_birth_year(), in);

    return is;
}
