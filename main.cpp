#include "student.h"
#include <iostream>

int main() {
    Student group; // Створення об'єкта класу Student

    std::cout << "Input student data:" << std::endl;
    group.inputData(); // Виклик методу для введення даних про студентів

    std::cout << "\nOutput student data:" << std::endl;
    group.outputData(); // Виклик методу для виведення даних про студентів

    return 0;
}
