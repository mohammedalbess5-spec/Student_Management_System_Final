#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "studentorder.h"
#include "average_grade.h"
#include "highest_grade.h"
#include "lowest_grade.h"
#include "grade_display.h"
#include "print.h"
#include "letter_grade.h"
#include "pass_fail_rate.h"


void User_Input(){
    int studentsNum;
    
    while (1){
            print("Enter Students Number: ");

            if (scanf("%d", &studentsNum) == 1){
                
                if (studentsNum > 0)
                    break;
                else
                print("Number must be positive.\n");
                }   
            else{
                print("Invalid input! Please enter numbers only.\n");
            }

        while (getchar() != '\n'); 
        }
        if (studentsNum <= 0){
            print("Invalid number! Please enter a positive number.\n");
        } 

    int studentsGrade[studentsNum];
    int i = 0;
    while (i < studentsNum){
        int grade; 

        do {
            print("Enter grade for student number ");
            studentorder(i + 1);
            print(" : ");
            scanf("%d", &grade);

            if (grade < 0 || grade > 100) {
                print("Invalid grade! Please enter a grade between 0 and 100.\n");
            }

        } 
        while (grade < 0 || grade > 100);

        studentsGrade[i] = grade; 
        i++;
    }

    print("\n");
    average_grade(studentsGrade, studentsNum);
    highest_grade(studentsGrade, studentsNum);
    lowest_grade(studentsGrade, studentsNum);
    grade_display(studentsGrade,studentsNum);
    pass_fail_rate(studentsGrade, studentsNum);
}




    
