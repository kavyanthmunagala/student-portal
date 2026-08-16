#include <iostream>
#include "StudentManager.h"

void printWelcomeMessage() {
    std::cout << "      Welcome to Student Portal      " << std::endl;
}

void displayStudent(const Student& student) {
    std::cout << "ID: " << student.id << std::endl;
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Course: " << student.course << std::endl;
    std::cout << "Attendance: " << student.attendance << "%" << std::endl;
}

int main() {
    printWelcomeMessage();

    StudentManager manager;

    manager.addStudent(Student(101, "Ananya", "Computer Science", 87.5));
    manager.addStudent(Student(102, "Rahul", "Electronics", 91.0));

    std::cout << "\nRegistered Students:\n" << std::endl;

    for (const Student& student : manager.getStudents()) {
        displayStudent(student);
        std::cout << std::endl;
    }

    return 0;
}
