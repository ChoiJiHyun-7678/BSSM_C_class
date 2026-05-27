#include <stdio.h>

int main() {
    int a,b,tot;
    double avg;
    scanf("%d%d",&a,&b);
    printf("두과목의 점수 : %d, %d\n",a,b);
    avg = (a+b)/2.0;
    printf("두과목의 평균 : %.1f\n",avg);
    return 0;
}