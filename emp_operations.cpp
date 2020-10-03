//
// Created by hobbit on 29.09.2020.
//

#include "emp_operations.h"

// Функциональный объект для сортировки по возрасту
bool EmployeeOperations::YearsOldSortDown::operator()(const Employee &a, const Employee &b) const
{
    return a.get_birth_year() < b.get_birth_year();
}

// Функциональный объект для сортировки по возрасту
bool EmployeeOperations::YearsOldSortUp::operator()(const Employee &a, const Employee &b) const
{
    return a.get_birth_year() > b.get_birth_year();
}

// Конструктор функционального объекта для поиска по возрасту
EmployeeOperations::FindByYearsOld::FindByYearsOld(unsigned short pattern) : _pattern(pattern)
{}

// Функциональный объект для поиска по возрасту
bool EmployeeOperations::FindByYearsOld::operator()(const Employee &a) const
{
    return (1900 + gmtime(nullptr)->tm_year - a.get_birth_year()) == _pattern;
}

// Конструктор функционального объекта для поиска выходящих на пенсию
EmployeeOperations::WillRetireInYear::WillRetireInYear(unsigned short pattern, unsigned short male,
                                                       unsigned short female)
        : _pattern(pattern), _retire_time_male(male), _retire_time_female(female)
{}

// Функциональный объект для поиска выходящих на пенсию
bool EmployeeOperations::WillRetireInYear::operator()(const Employee &a) const
{
    return (a.get_gender() == MALE) && (_pattern - a.get_birth_year() == _retire_time_male) ||
           (a.get_gender() == FEMALE) && (_pattern - a.get_birth_year() == _retire_time_female);
}

// Функциональный объект для сортировки по фамилии
bool EmployeeOperations::FioSortDown::operator()(const Employee &a, const Employee &b) const
{
    return a.get_fio() > b.get_fio();
}

// Функциональный объект для сортировки по фамилии
bool EmployeeOperations::FioSortUp::operator()(const Employee &a, const Employee &b) const
{
    return a.get_fio() < b.get_fio();
}
