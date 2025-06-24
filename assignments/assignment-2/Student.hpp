#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Grades.hpp"
#include <iostream>
#include <string>
#include <vector>

class Student
{
    public:
        Student(const std::string& name, int id, const std::vector<Grades>& grades);
        void display() const;
        void addGrade(Grades grade);
        float getAverageGrades() const;
        int getId() const;

    private:
        std::string name;
        int id;
        std::vector<Grades> grades;
};

#endif