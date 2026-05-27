#include <stdio.h>

int main () {
    int year, mon, date;
    scanf("%d %d %d", &year, &mon, &date);
    int add = year-(mon+date);
    if (add){
        printf("대박!!");
    }
    else {
        printf("그럭저럭");
    }

} 