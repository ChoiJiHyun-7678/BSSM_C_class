#include <stdio.h>

void print_line(void);

int main(){
    print_line();
    printf("학번\t이름\t전공\t성적\n");
    print_line();
    return 0;
}

void print_line(){
    for (int i=0; i<30; i++){
        printf("=");
    }
    printf("\n");
}