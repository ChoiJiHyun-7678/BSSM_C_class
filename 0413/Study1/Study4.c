#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';
    printf("%s",str);
    printf("end");
}