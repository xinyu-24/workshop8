#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>
#include <vector>
#include "Course.h"

class University {
private:
    std::string name;
    std::string location;
    std::vector<Course> courses;

public:
    University(const std::string& name, const std::string& location);
    void addCourse(int id, const std::string& name);
    Course* getCourse(int id);
};

#endif // UNIVERSITY_H
