#include <stdio.h>

int main(void){
    int a;
    int *ptr;

    ptr = &a;
    *ptr = 10;

    printf("%d\n",*ptr);
    printf("%d\n",a);
    printf("%p\n",ptr);
    printf("%p\n",&a);

}