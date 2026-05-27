#include <stdio.h>

int main (void) {
    int age;
    double height;
    printf("나이와 키를 입력해주세요 : ");
    scanf("%d%lf",&age, &height);
    printf("나이는 %d세, 키는 %fcm 입니다.\n",age,height);
    return 0;
}