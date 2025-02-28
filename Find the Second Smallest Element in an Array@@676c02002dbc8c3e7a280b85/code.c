#include<stdio.h>
int main(){
    int num,now=-1;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",arr[i]);
    }
    // for(int i=0;i<num-1;i++){
    //     min1=arr[i];
    //     if(min1>arr[i+1]){
    //         min1=arr[i+1];
    //     }
    // }
    printf("%d",now);
    return 0;
}