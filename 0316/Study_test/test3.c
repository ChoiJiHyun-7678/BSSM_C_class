# include <stdio.h>

int main() {
    int a1,b1,c1;
    float a2,b2,c2;
    int tot;
    float avg;
    scanf("%d%d%d",&a1,&b1,&c1);
    scanf("%f%f%f",&a2,&b2,&c2);
    tot = a1+b1+c1;
    avg = (a2+b2+c2)/2;
    int last = (tot>20)&&(avg>4.0);
    printf("%d",last);
    


}