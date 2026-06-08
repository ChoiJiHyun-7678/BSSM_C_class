#include <stdio.h>

int main(){
    int arr[3];
    int *p = arr;

    *(arr + 0) = 10;
    *(arr + 1) = *(arr + 0) + 10;
    printf("--------------");
    scanf("%d", arr + 2);

    printf("%d\n", *(p++));
    printf("%d\n", *(p++));
    printf("%d\n", *(p));
}