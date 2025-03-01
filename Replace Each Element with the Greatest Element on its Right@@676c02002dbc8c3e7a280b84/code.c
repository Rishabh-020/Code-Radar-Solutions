#include<stdio.h>
int main(){
    int num,max=-1;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    // for(int i=0;i<num;i++){
    //     for(int j=i+1;j<num-1;j++){
    //         if(arr[j]>arr[j+1] && arr[j]>max){
    //             max=arr[j];
    //             arr[i]=arr[j];
    //         }else if(arr[j]<arr[j+1] && arr[j+1]>max){
    //             max=arr[j+1];
    //             arr[i]=arr[j+1];
    //         }
    //     }
    //     max=0;
    // }
    // for(int i=0;i<num-2;i++){
    //     printf("%d ",arr[i]);
    // }
    // if(num>1){
    //     printf("%d ",arr[num-1]);
    // }
    // printf("%d",-1);
    for(int i=num-1;i<=0;i++){
        int temp=arr[i];
        arr[i]=max;
        if(temp>max){
            max=temp;
        }
    }
    for(int i=0;i<num;i++){
        printf("%d ",&arr[i]);
    }
    return 0;
}