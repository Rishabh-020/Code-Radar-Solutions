#include <stdio.h>

int main() {
    int num,Sorted=1;
    scanf("%d\n",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=1;i<len;i++){
        if(arr[i-1]>arr[i]){
            Sorted=0;
            break;
        }
    }
    if(mai){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}