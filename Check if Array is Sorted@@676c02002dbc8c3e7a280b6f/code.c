#include <stdio.h>

int main() {
    int num,mai;
    scanf("%d\n",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=1;i<len;i++){
        if(arr[i-1]<arr[i]){
            mai++;
        }else{
            mai=0;
        }
    }
    if(mai==num-1){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}