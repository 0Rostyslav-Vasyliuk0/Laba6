#include "student.h"

// Конструктор класу Student, викликається при створенні об'єкта класу.
Student::Student() {
    std::cout << "Constructor called." << std::endl;
}

// Деструктор класу Student, викликається при знищенні об'єкта класу.
Student::~Student() {
    std::cout << "Destructor called." << std::endl;
}

// Метод для введення даних про студентів.
void Student::inputData() {
    for (int i = 0; i < SIZE; i++) {
        int houseNumber;
        std::string name, street;

        // Введення даних про студента.
        std::cout << "Enter Name, Street, and House Number for student " << (i + 1) << ": ";
        std::cin >> name >> street >> houseNumber;

        // Встановлення даних студента в масив із перевіркою на коректність.
        setStudentData(i, name, street, houseNumber);
    }
}

// Метод для виведення даних про студентів.
void Student::outputData() {
    for (const auto& s : students) {
        // Виведення даних про студента в зрозумілому форматі.
        std::cout << "Name: " << s.name << ", Street: " << s.street 
                  << ", House Number: " << s.houseNumber << std::endl;
    }
}

// Метод для встановлення даних студента, перевіряючи номер будинку.
void Student::setStudentData(int index, const std::string& name, const std::string& street, int houseNumber) {
    if (index < 0 || index >= SIZE) return; // Перевірка меж масиву.

    // Перевірка на коректність номера будинку.
    if (validateHouseNumber(houseNumber)) {
        students[index].name = name;
        students[index].street = street;
        students[index].houseNumber = houseNumber;
    } else {
        std::cerr << "Invalid House Number." << std::endl;
    }
}

// Метод для перевірки коректності номера будинку. Повертає true, якщо номер додатний.
bool Student::validateHouseNumber(int houseNumber) const {
    return houseNumber > 0;
}
