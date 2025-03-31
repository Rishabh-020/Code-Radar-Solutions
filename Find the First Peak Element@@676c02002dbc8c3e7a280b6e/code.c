#include <stdio.h>
int main() {
    int num,initial;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    initial=arr[0];
    for(int i=1;i<num-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            return 0;
        }
    }
    // if(arr[num-1]>arr[num-2]){
    //     printf("%d",arr[num-1]);
    //     return 0;
    // }
    printf("%d",-1);
    return 0;
}