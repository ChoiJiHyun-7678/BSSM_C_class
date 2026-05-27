#include <stdio.h>

int main(){
    int rank;
    char grade;
    scanf("%d, %c", &rank, &grade);
    if (rank<=10 && grade =='A'){
        printf("전액 장학금");
    }
    else if (rank<=10 && grade=='B'){
        printf("반액 장학금");
    }
    else {
        printf("장학금 없음");
    }
}