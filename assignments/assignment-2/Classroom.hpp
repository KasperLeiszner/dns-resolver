#ifndef CLASSROOM_HPP
#define CLASSROOM_HPP

#include <vector>
#include "Student.hpp"

class Classroom {
    public:
        void addStudent(Student student);
        void removeStudent(Student student);
        float getAverageGrades();
        void display();
    private:
        std::vector<Student> students;
};

#endif