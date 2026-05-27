#include <stdio.h>

int main (void){
    int arr[3];
    int *ptr = arr;

    *(arr+0) = 10;
    *(arr+1) = *(arr+0) = 10;

    printf("세번째 요소 입력 : ");
    scanf("%d",arr+2);

    printf("%d\n",*(ptr++));
    printf("%d\n",*(ptr++));
    printf("%d\n",*(ptr));
}