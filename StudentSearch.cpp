#include "StudentSearch.h"

const Student* StudentSearch::findByCourse(
    const std::vector<Student>& students,
    const std::string& course) {

    for (const Student& student : students) {
        if (student.course == course) {
            return &student;
        }
    }

    return nullptr;
}
