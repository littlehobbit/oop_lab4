//
// Created by hobbit on 29.09.2020.
//

#ifndef LAB4_EMP_OPERATIONS_H
#define LAB4_EMP_OPERATIONS_H

#include "employee.h"

struct EmployeeOperations
{
    // Функциональный объект для сортировки по фамилии
    struct FioSortUp
    {
        bool operator()(const Employee &a, const Employee &b) const;
    };

    // Функциональный объект для сортировки по фамилии
    struct FioSortDown
    {
        bool operator()(const Employee &a, const Employee &b) const;
    };

    // Функциональный объект для сортировки по возрасту
    struct YearsOldSortUp
    {
        bool operator()(const Employee &a, const Employee &b) const;
    };

    // Функциональный объект для сортировки по возрасту
    struct YearsOldSortDown
    {
        bool operator()(const Employee &a, const Employee &b) const;
    };

    // Функциональный объект для поиска по возрасту
    struct FindByYearsOld
    {
        explicit FindByYearsOld(unsigned short pattern);

        bool operator()(const Employee &a) const;

    private:
        unsigned short _pattern;
    };

    // Функциональный объект для поиска выходящих на пенсию
    struct WillRetireInYear
    {
        explicit WillRetireInYear(unsigned short pattern, unsigned short male = 65, unsigned short female = 55);

        bool operator()(const Employee &a) const;

    private:
        unsigned short _retire_time_male;
        unsigned short _retire_time_female;
        unsigned short _pattern;
    };
};

#endif //LAB4_EMP_OPERATIONS_H
