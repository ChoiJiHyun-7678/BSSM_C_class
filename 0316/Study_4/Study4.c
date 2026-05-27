# include <stdio.h>

int main (){
    int a = 10, b = 20, res;
    res = (a<0)&&(++b>20);
    printf("res: %d, a: %d, b: %d\n", res,a,b);
    
}