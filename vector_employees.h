/*
* Южный федеральный университет, ИКТИБ, кафедра МОП ЭВМ
* Гатауллин Руслан Рустемович
* Написано 02.10.2020
*/
#ifndef VECTOR_EMPLOYEES_H
#define VECTOR_EMPLOYEES_H

#include <vector>
#include "employee.h"
#include <algorithm>

// Класс с vector<Employee>
class Vector_employees
{
public:

    Vector_employees() = default;

    explicit Vector_employees(const std::vector<Employee> &emp);

    // Вставка рабоников
    void add_employees(const std::vector<Employee> &add);

    void add_employees(const Employee &add);

    std::vector<Employee> &get_employees();

    // Метод для поиска, принимает функциональный объект
    template<class T>
    std::vector<Employee> find(T fo) const;


private:
    std::vector<Employee> _emp;
};

std::istream &operator>>(std::istream &, Vector_employees &emp);

template<class T>
std::vector<Employee> Vector_employees::find(T fo) const
{
    std::vector<Employee> retired;

    auto it_emp = std::find_if(_emp.begin(), _emp.end(), fo);
    while (it_emp != _emp.cend())
    {
        retired.push_back(*it_emp);
        if (it_emp != _emp.end()) it_emp++;
        it_emp = std::find_if(it_emp, _emp.end(), fo);
    }
    return retired;
}

#endif //VECTOR_EMPLOYEES_H
