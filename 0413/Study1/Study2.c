#include <stdio.h>

int main(){
	int num1;
	scanf("%d",num1);
    int arr[num1];
    int i;
	for (i=0; i<num1; i++){
        scanf("%d \n",&arr[i]);
    }
    for(int i = 0; i < num1; i++) {
        printf("%d ", arr[i]);
    }
}