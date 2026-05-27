#include <stdio.h>

int a;
void assign_a(){
    a=10;
}
void assign_b(){
    int a;
    a = 20;
}
int main(){
    printf("main a : %d\n",a);
    assign_a();
    printf("assign_a a : %d\n",a);
    assign_b();
    printf("assign_b a : %d\n", a);
    return 0;
}