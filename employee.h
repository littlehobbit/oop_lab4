//
// Created by hobbit on 28.09.2020.
//

#ifndef LAB4_EMPLOYEE_H
#define LAB4_EMPLOYEE_H

#include <string>

// Ошибка некорректного ввода
constexpr const char* INC_IN = "Incorrect input";

// Тип перечисления полов
enum Gender
{
    MALE,       // 0 - Муж
    FEMALE      // 1 - Жен
};

// Класс работника
class Employee
{
public:
    // Конструктор по умолчанию
    Employee() = default;

    // Конструктор копирования по умолчанию
    Employee(const Employee &other) = default;

    // Оператор присваивания по умолчанию
    Employee &operator=(const Employee &other) = default;

    // Деструктор по умолчанию
    ~Employee() = default;

    // Конструктор работника
    Employee(std::string fio, std::string post, Gender gender, unsigned short st_wk, unsigned short birth_y);

    const std::string &get_fio() const;

    const std::string &get_post() const;

    Gender get_gender() const;

    unsigned short get_start_work() const;

    unsigned short get_birth_year() const;

    void set_fio(std::string fio);

    void set_post(std::string post);

    void set_gender(Gender g);

    void set_start_work(unsigned short start_work);

    void set_birth_year(unsigned short birth_year);

private:
    // ФИО
    std::string _fio;
    // Должость
    std::string _post;
    // Пол
    Gender _gender = MALE;
    // Начало работы
    unsigned short _start_work = 0;
    // Год рождения
    unsigned short _birth_year = 0;
};

// Ввод из потока
std::istream &operator>>(std::istream &is, Employee &to_in);

// Вывод в поток
std::ostream &operator<<(std::ostream &os, const Employee &to_out);

#endif //LAB4_EMPLOYEE_H
