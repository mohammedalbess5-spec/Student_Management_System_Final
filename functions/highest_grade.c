#include <unistd.h>
#include "print.h"
#include "studentorder.h"

void highest_grade(int studentsGrade[], int studentsNum){
    int i = 1;
    int highest = studentsGrade[0];
    int highest_index = 0;  

    while (i < studentsNum){
        if (studentsGrade[i] > highest){
        highest = studentsGrade[i];
        highest_index = i;
        }
        i++;
    }
    
    print("Highest grade: ");
    studentorder(highest);
    print(" (Student ");
    studentorder(highest_index + 1);
    print(")\n\n");
}


