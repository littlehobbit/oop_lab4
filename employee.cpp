//
// Created by hobbit on 28.09.2020.
//
#include "employee.h"
#include <utility>
#include <iomanip>
#include <set>

// Конструктор
Employee::Employee(std::string fio, std::string post, Gender gender, unsigned short st_wk, unsigned short birth_y)
        : _fio(std::move(fio)), _post(std::move(post)), _gender(gender),
          _start_work(st_wk), _birth_year(birth_y)
{}

const std::string &Employee::get_fio() const
{
    return _fio;
}

const std::string &Employee::get_post() const
{
    return _post;
}

Gender Employee::get_gender() const
{
    return _gender;
}

unsigned short Employee::get_start_work() const
{
    return _start_work;
}

unsigned short Employee::get_birth_year() const
{
    return _birth_year;
}

void Employee::set_fio(std::string fio)
{
    _fio = std::move(fio);
}

void Employee::set_post(std::string post)
{
    _post = std::move(post);
}

void Employee::set_gender(Gender gender)
{
    _gender = gender;
}

void Employee::set_birth_year(unsigned short birth_year)
{
    _birth_year = birth_year;
}

void Employee::set_start_work(unsigned short start_work)
{
    _start_work = start_work;
}

// Ввод из потока
std::istream &operator>>(std::istream &is, Employee &to_in)
{
    const std::set<std::string> females_str = {"жен", "fem", "female", "женщина", "Ж", "ж"};
    const std::set<std::string> males_str = {"муж", "male", "мужчина", "М", "м"};

    std::string input;
    if (!getline(is, input)) return is;
    std::istringstream buf(input);

    std::string str;
    std::string fio;
    for (int i = 0; i < 3; ++i)
    {
        if (buf >> str)
            fio.append(str + ((i == 2) ? "" : " "));
        else
            throw std::runtime_error(INC_IN);
    }

    std::string post;
    // Проверка, можем ли мы получить данные из ввода
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

    to_in.set_fio(fio);
    to_in.set_post(post);
    to_in.set_birth_year(birth_year);
    to_in.set_start_work(start_work);
    to_in.set_gender(gender);

    return is;
}

// Вывод
std::ostream &operator<<(std::ostream &os, const Employee &to_out)
{
    os << to_out.get_fio() << "\t\t";
    os << to_out.get_post() << "\t\t";
    os << (to_out.get_gender() ? "Ж " : "М") << "\t\t";
    os << to_out.get_birth_year() << "\t\t";
    os << to_out.get_start_work() << "\t\t";

    return os;
}
