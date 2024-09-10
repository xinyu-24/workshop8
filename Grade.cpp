#include "Grade.h"

Grade::Grade(const std::string& assignment, int value) : assignment(assignment), value(value) {}

std::string Grade::getAssignment() const {
    return assignment;
}

int Grade::getValue() const {
    return value;
}
