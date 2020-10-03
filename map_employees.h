/*
* Южный федеральный университет, ИКТИБ, кафедра МОП ЭВМ
* Гатауллин Руслан Рустемович
* Написано 02.10.2020
*/

#ifndef MAP_EMPLOYEES_H
#define MAP_EMPLOYEES_H

#include <map>
#include <vector>
#include "employee.h"

// Класс, который хранит словарь работников
template<typename T>
class Map_employees
{
public:
    Map_employees() = default;

    explicit Map_employees(const std::vector<Employee> &emp);

    std::multimap<unsigned short, Employee> &get_employees();

    void add_employees(const Employee &add);

    void add_employees(const std::vector<Employee> &add);

    std::vector<Employee> find(T& pattern);

    std::vector<Employee> find_retired_in_year(unsigned short year);

private:
    std::multimap<T, Employee> _emp;
};

template<typename T>
std::istream &operator>>(std::istream &, Map_employees<T> &emp);

#include "map_employees.cpp"

#endif //MAP_EMPLOYEES_H

