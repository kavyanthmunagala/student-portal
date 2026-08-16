#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student {
    int id;
    std::string name;
    std::string course;
    double attendance;

    Student(int studentId, const std::string& studentName,
            const std::string& studentCourse, double studentAttendance)
        : id(studentId),
          name(studentName),
          course(studentCourse),
          attendance(studentAttendance) {}
};

#endif
