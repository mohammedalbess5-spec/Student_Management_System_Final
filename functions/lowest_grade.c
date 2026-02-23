#include <unistd.h>
#include "print.h"
#include "studentorder.h"

void lowest_grade(int studentsGrade[], int studentsNum){
    int i = 1;  
    int lowest = studentsGrade[0]; 
    int lowest_index = 0;  

    while (i < studentsNum){
        if (studentsGrade[i] < lowest){
            lowest = studentsGrade[i];
            lowest_index = i;
        }
        i++;
    }

    print("Lowest grade: ");
    studentorder(lowest);
    print(" (Student ");
    studentorder(lowest_index + 1);
    print(")\n\n");
}


