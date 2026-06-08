#include <stdio.h>

int main() {
    int a[5] = {10,20,30,40,50};
    int *p = a;
    int *p2 = a+3;
    printf("%ld\n",p2-p);
    if(p2>p){
        printf("p2>p\n");
    }
    else {
        printf("p2<=p\n");
    }
    return 0;
}