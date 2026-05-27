#include <stdio.h>

int main(){
    int a = 1;
    int i;

    for (i=0; i<5; i++){
        if (i==2){
            continue;
        }
        printf("%d",i);
    }
    return 0; 
}