#include <stdio.h>

int main(){
    int number = 10;
    int *p;
    p = &number;
    printf("%d", &p);
}