#include <stdio.h>

int swap(int * x, int * y){
    int temp;
    temp = *x;
    *x=*y;
    *y = temp;
    return 0;
}

int main (void) {
    int x = 10, y = 20;
    printf("호출전%d,%d\n",x,y);
    swap(&x,&y);
    printf("호출후%d,%d\n",x,y);
    return 0;
}

    
