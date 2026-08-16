#include "StudentManager.h"

void StudentManager::addStudent(const Student& student) {
    students.push_back(student);
}

const std::vector<Student>& StudentManager::getStudents() const {
    return students;
}

const Student* StudentManager::findStudentById(int id) const {
    for (const Student& student : students) {
        if (student.id == id) {
            return &student;
        }
    }

    return nullptr;
}

bool StudentManager::removeStudentById(int id) {
    for (auto iterator = students.begin(); iterator != students.end(); ++iterator) {
        if (iterator->id == id) {
            students.erase(iterator);
            return true;
        }
    }

    return false;
}
