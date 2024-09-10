#include "Course.h"

Course::Course(int id, const std::string& name) : id(id), name(name) {}

void Course::addPerson(Person* p) {
    people.push_back(p);
}

int Course::getId() const {
    return id;
}

std::string Course::getName() const {
    return name;
}
