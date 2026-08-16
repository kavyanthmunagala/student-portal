#ifndef STUDENT_SEARCH_H
#define STUDENT_SEARCH_H

#include "models/StudentRecord.h"
#include <vector>

class StudentSearch {
public:
    static const Student* findByCourse(
        const std::vector<Student>& students,
        const std::string& course);
};

#endif
