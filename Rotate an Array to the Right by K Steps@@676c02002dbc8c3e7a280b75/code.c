#include <stdio.h>

int main() {
    int num,num2;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num2);
    for(int i=num-num2;i<num;i++){
        printf("%d",arr[i]);
    }
    return 0;
}