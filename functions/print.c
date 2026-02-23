#include <unistd.h>
#include <string.h>

void print(char msg[]){

    write (1, msg, strlen(msg));

}


