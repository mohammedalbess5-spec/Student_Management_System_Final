#include "unistd.h"
#include "print.h"
#include "studentorder.h"

void average_grade(int studentsGrade[], int studentsNum){
    int i = 0;
    int grade_sum = 0;

    while (i < studentsNum){
        grade_sum += studentsGrade[i];
        i++;
    }

    int grade_average = grade_sum / studentsNum;

    print("Average: ");
    studentorder(grade_average);
    print("\n\n");
}

