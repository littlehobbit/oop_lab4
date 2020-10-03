/*
* Южный федеральный университет, ИКТИБ, кафедра МОП ЭВМ
* Гатауллин Руслан Рустемович
* Написано 02.10.2020
*/

#include <iostream>
#include <sstream>
#include <fstream>
#include "console.h"
#include "vector_employees.h"
#include "map_employees.h"
#include "emp_operations.h"
#include <algorithm>
#include <set>

void Console::run()
{
    Vector_employees v_e;
    Map_employees<unsigned short> m_e;
    try
    {
        std::ifstream fin("employees.txt", std::ios::in);
        if (!fin)
        {
            throw std::runtime_error("File doesn't exit");
        }

        fin >> v_e;
        fin.clear();
        fin.seekg(0, std::ios::beg);
        fin >> m_e;


        std::string in;
        std::cout << "Введите год: ";
        std::cin >> in;
        std::istringstream buf(in);

        unsigned short year;
        if (!(buf >> year))
            throw std::runtime_error("Incorrect input");

        std::vector<Employee> v_ans1 = v_e.find(EmployeeOperations::WillRetireInYear(year));
        std::sort(v_ans1.begin(), v_ans1.end(), EmployeeOperations::FioSortUp());

        std::cout << "\nПоиск по последовательному контейнеру\n";
        for (const auto& em : v_ans1)
        {
            std::cout << em << std::endl;
        }

        std::cout << std::endl << "=======================================\n\n";

        std::vector<Employee> v_ans2 = m_e.find_retired_in_year(year);
        std::sort(v_ans2.begin(), v_ans2.end(), EmployeeOperations::FioSortUp());

        std::cout << "Поиск по ассоциативному контейнеру\n";
        for (const auto& em : v_ans2)
            std::cout << em << std::endl;

    }
    catch (std::exception &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
}