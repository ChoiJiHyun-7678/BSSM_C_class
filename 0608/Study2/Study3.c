#include <stdio.h>

int print_str(char **pps, int cnt);

int main(){
    char *ani[5] = {"a","b","c","d","e"};
    int cnt;

    cnt = sizeof(ani) / sizeof(ani[0]);
    print_str(ani,cnt);
    return 0;
}

int print_str(char **pps, int cnt){
    int i;
    for(i=0; i<cnt; i++){
        printf("%s ",pps[i]);
    }
}