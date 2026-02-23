#include "print.h"
#include "studentorder.h"

void pass_fail_rate(int studentsGrade[], int studentsNum){
    int pass = 0;
    int fail = 0;
    int i = 0;

    while (i < studentsNum){
        if (studentsGrade[i] >= 60)
            pass++;
        else
            fail++;
        i++;
    }

    print("Pass students: ");
    studentorder(pass);
    print("\n");

    print("Fail students: ");
    studentorder(fail);
    print("\n\n");
}