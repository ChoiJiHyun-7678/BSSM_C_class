#include <stdio.h>

void st(){
    static int a = 1;
    printf("%d ", a++);
}
void at(){
    int a = 1;
    printf("%d ", a++);
}
int main() {
    st();
    st();
    st();
    at();
    at();
    at();
    return 0;
}