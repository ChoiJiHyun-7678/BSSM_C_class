#include <stdio.h>

int main(){
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;
    printf("증가전 pc = %d, pi = %d, pd = %d\n",pc,pi,pd);
}