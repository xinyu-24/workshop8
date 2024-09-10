#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "Student.h"
#include "Instructor.h"

class Course {
private:
    int id;
    std::string name;
    std::vector<Person*> people;

public:
    Course(int id, const std::string& name);
    void addPerson(Person* p);
    int getId() const;
    std::string getName() const;
};

#endif // COURSE_H
