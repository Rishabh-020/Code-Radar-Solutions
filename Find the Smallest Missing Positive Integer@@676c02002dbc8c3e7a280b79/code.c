#include<stdio.h>
#include<limits.h>
int main(){
    int num,num1=0;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
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
    for(int j=0;j<num;j++){
        for(int i=min;i<=max;i++){
            if(arr[j]!=i){
                num1=i;
            }
        }
    }
    printf("%d",num1);
    return 0;
}