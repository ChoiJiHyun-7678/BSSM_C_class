#include <stdio.h>

int main() {
    int arr1[4] = {11,12,13,14};
    int arr2[4] = {15,16,17,18};
    int arr3[4] = {19,20,21,22};
    int *ptr[3] = {arr1,arr2,arr3};
    int i,j;

    for (i=0; i<3; i++){
        for(j=0; j<4; j++){
            printf("%5d",ptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}