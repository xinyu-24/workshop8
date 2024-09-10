#include <iostream>
#include "University.h"
#include "Student.h"
#include "Gradebook.h"

int main() {
    // 1. Create a university
    University university("Example University", "Example City");

    // 2. Add a course to this university
    university.addCourse(101, "Introduction to Programming");

    // 3. Add a student to this course
    Student student(1, "John Doe");
    Course* course = university.getCourse(101);
    if (course) {
        course->addPerson(&student);

        // 4. Add a grade for this student for some of the assignments
        Gradebook gradebook;
        gradebook.addGrade(student.getId(), course->getId(), "Assignment 1", 92);
        gradebook.addGrade(student.getId(), course->getId(), "Assignment 2", 85);

        // Output grades for confirmation
        for (const auto& grade : gradebook.getGrades()) {
            std::cout << grade.getAssignment() << ": " << grade.getValue() << std::endl;
        }
    }

    return 0;
}
