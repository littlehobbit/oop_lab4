/*
* Южный федеральный университет, ИКТИБ, кафедра МОП ЭВМ
* Гатауллин Руслан Рустемович
* Написано 02.10.2020
*/

#ifndef MAP_EMPLOYEES_H
#define MAP_EMPLOYEES_H

#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include "employee.h"

// Класс, который хранит словарь работников
template<typename T>
class Map_employees
{
public:
    Map_employees() = default;

    explicit Map_employees(const std::multimap<T, Employee> &emp);

    std::multimap<T, Employee> &get_employees();

    void add_employee(std::pair<T, Employee>&& to_add);

    void add_employees(const std::multimap<T, Employee> &add);

    std::vector<Employee> find(T&& pattern);

    // std::vector<Employee> find_retired_in_year(unsigned short year);

private:
    std::multimap<T, Employee> _emp;
};

//std::istream &operator>>(std::istream &, Map_employees<unsigned short> &emp);

#endif //MAP_EMPLOYEES_H

#include "map_employees.cpp"
