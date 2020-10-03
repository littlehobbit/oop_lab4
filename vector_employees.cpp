/*
* Южный федеральный университет, ИКТИБ, кафедра МОП ЭВМ
* Гатауллин Руслан Рустемович
* Написано 02.10.2020
*/
#include "vector_employees.h"
#include "emp_operations.h"
#include <sstream>

// Конструктор
Vector_employees::Vector_employees(const std::vector<Employee> &emp)
{
    _emp = emp;
}

std::vector<Employee> &Vector_employees::get_employees()
{
    return _emp;
}

// Вставка рабочих
void Vector_employees::add_employees(const std::vector<Employee> &add)
{
    for (const auto &emp : add)
        _emp.push_back(emp);
}

// Вставка рабочего
void Vector_employees::add_employees(const Employee &add)
{
    _emp.push_back(add);
}

// Ввод с потока
std::istream &operator>>(std::istream &is, Vector_employees &emp)
{
    Employee in;
    while (is >> in)
        emp.get_employees().push_back(in);

    return is;
}
