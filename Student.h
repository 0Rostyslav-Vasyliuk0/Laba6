#ifndef STUDENT_H
#define STUDENT_H

#include <array>
#include <string>
#include <iostream>

// Константа, що визначає кількість студентів, яких можна зберігати.
const int SIZE = 3;

// Структура, яка зберігає інформацію про студента.
struct student_s_t {
    std::string name;      // Ім'я студента.
    std::string street;    // Вулиця, на якій проживає студент.
    int houseNumber;       // Номер будинку, де проживає студент.
};

// Клас, що забезпечує методи для введення та виведення інформації про студентів.
class Student {
private:
    std::array<student_s_t, SIZE> students; // Масив структур для зберігання даних про студентів.

public:
    Student();  // Конструктор
    ~Student(); // Деструктор

    void inputData();      // Метод для введення даних про студентів.
    void outputData();     // Метод для виведення даних про студентів.
    void setStudentData(int index, const std::string& name, const std::string& street, int houseNumber); // Метод для встановлення даних студента.

private:
    bool validateHouseNumber(int houseNumber) const; // Метод для перевірки коректності номера будинку.
};

#endif
