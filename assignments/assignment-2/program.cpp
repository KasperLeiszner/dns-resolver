#include "Student.hpp"
#include "Classroom.hpp"
#include "Grades.hpp"

int main() {
    Student spiderman("Spiderman", 0, { B, C });
    spiderman.addGrade(APlus);

    Student thor("Thor", 1337, { APlus, A, AMinus});
    thor.addGrade(F);
    thor.addGrade(F);

    Student hulk("Hulk", 12, { APlus, APlus });

    Student superman("Superman", 9999, { APlus, APlus, APlus, APlus, APlus });
    
    Classroom classroom;
    classroom.addStudent(superman);
    classroom.addStudent(spiderman);
    classroom.addStudent(thor);
    classroom.addStudent(hulk);
    classroom.removeStudent(superman); //NOT A MARVEL HERO!
    classroom.display();

    return 0;
}