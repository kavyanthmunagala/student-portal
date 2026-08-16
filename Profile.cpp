#include "Profile.h"

Profile::Profile(int id, const std::string& name, const std::string& course)
    : id(id), name(name), course(course) {}

int Profile::getId() const {
    return id;
}

const std::string& Profile::getName() const {
    return name;
}

const std::string& Profile::getCourse() const {
    return course;
}
