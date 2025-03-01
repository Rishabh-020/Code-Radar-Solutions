#include<stdio.h>
int main(){
    int num,max=0;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num-1;j++){
            if(arr[j]>arr[j+1] && arr[j]>max){
                max=arr[j];
                arr[i]=arr[j];
            }else if(arr[j]<arr[j+1] && arr[j+1]>max){
                max=arr[j+1];
                arr[i]=arr[j+1];
            }
        }
        max=0;
    }
    for(int i=0;i<num-1;i++){
        printf("%d ",arr[i]);
    }
    printf("%d",-1);
    return 0;
}