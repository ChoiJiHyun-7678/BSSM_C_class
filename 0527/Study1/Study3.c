#include <stdio.h>

int main(){
    int a = 10;
    int *p;
    p = &a;
    *p = 30;
    printf("%d %d", *p,a);
}