#include <unistd.h>
#include "studentorder.h"
#include "letter_grade.h"
#include "print.h"

void grade_display(int studentsGrade[], int studentsNum){
    print("Grades entered:\n");

    int i = 0;
    while (i < studentsNum){
        print("Student number ");
        studentorder(i + 1);
        print(" : ");

        studentorder(studentsGrade[i]);   
        print(" ");

        char letter = letter_grade(studentsGrade[i]);  
        write(1, &letter, 1);
        print("\n");

        i++;
    }

    print("\n");
}