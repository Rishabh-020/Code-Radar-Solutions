#include<stdio.h>
#include<limit.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",arr[i]);
    }
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<num;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=min;i<=max;i++){
        if(i not in arr){
            printf("%d",i);
        }
    }
    return 0;
}