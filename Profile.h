#ifndef PROFILE_H
#define PROFILE_H

#include <string>

class Profile {
public:
    Profile(int id, const std::string& name, const std::string& course);

    int getId() const;
    const std::string& getName() const;
    const std::string& getCourse() const;

private:
    int id;
    std::string name;
    std::string course;
};

#endif
