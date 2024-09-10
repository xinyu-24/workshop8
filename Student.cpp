#include "Student.h"

Student::Student(int id, const std::string& name) : Person(name), id(id) {}

int Student::getId() const {
    return id;
}
