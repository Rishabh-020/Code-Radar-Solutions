#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",arr[i]);
    }
    int min1=-1,min2=-1;
    // for(int i=0;i<num-1;i++){
    //     min1=arr[i];
    //     if(min1>arr[i+1]){
    //         min1=arr[i+1];
    //     }
    // }
    printf("%d",min1);
    return 0;
}