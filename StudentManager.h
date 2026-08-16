#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include "Student.h"
#include <vector>

class StudentManager {
private:
    std::vector<Student> students;

public:
    void addStudent(const Student& student);
    const std::vector<Student>& getStudents() const;
    const Student* findStudentById(int id) const;
    bool removeStudentById(int id);
};

#endif
