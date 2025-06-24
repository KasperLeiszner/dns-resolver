#include "Student.hpp"

Student::Student(const std::string& name, int id, const std::vector<Grades>& grades) {
    this->name = name;
    this->id = id;
    this->grades = grades;
}

void Student::display() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Id: " << id << std::endl;
    std::cout << "Grade Avg: " << getAverageGrades() << std::endl;
    std::cout << "Grades: ";
    
    for (Grades grade : grades)
    {
        std::cout << grade << " ";
    }
    
    std::cout << std::endl;
}

void Student::addGrade(Grades grade) {
    grades.push_back(grade);
}

int Student::getId() {
    return id;
}

float Student::getAverageGrades() {
    float sum = 0;
    
    for(int gradeNumeric : grades) {
        sum += gradeNumeric;
    }

    return sum/grades.size();
}