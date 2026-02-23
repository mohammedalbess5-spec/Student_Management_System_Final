#include <unistd.h>
#include "print.h"
#include "studentorder.h"

void    studentorder(int n){
    char    num[10];
    int     i = 0;

    if (n == 0) {  
        write(1, "0", 1);
        return;
    }

    while (n > 0){
        num[i] = (n % 10) + '0';
        n = n / 10;
        i++;
    }

    while (i > 0){
        i--;
        write(1, &num[i], 1);
    }
}


