#include <stdio.h>

void hello();

int main() {
    hello(5);
    return 0;
}

void hello(int n){
    if (n==0){
        return;
    }
    else{
        printf("hello ");
        hello(n-1);
    }
    printf("hi ");
}