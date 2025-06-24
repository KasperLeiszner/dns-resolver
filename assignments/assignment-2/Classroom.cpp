#include "Classroom.hpp"

void Classroom::addStudent(Student student) {
    students.push_back(student);
}

void Classroom::removeStudent(Student student) {
    for(int i = 0; i < students.size(); i++) {
        if(students[i].getId() == student.getId()) {
            students.erase(students.begin() + i);
            return;       
        }
    }
}

float Classroom::getAverageGrades() const {
    if (students.empty())
        return 0.0;
    
    float sum = 0;

    for (const Student& student : students)
    {
        sum += student.getAverageGrades();
    }
    
    return sum/students.size();
}

void Classroom::display() const {
    for (Student student : students)
    {
        student.display();
        std::cout << std::endl;
    }

    std::cout << "Classroom Avg: " << getAverageGrades() << std::endl;
}