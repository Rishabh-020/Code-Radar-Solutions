#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int mn1=arr[0],mn2=arr[2];
    if(mn2>mn1){
        mn1=arr[1];
        mn2=arr[0];
    }
    for(int i=0;i<num;i++){
        if(arr[i]>mn1){
            mn2=mn1;
            mn1=arr[i];
        }else if(arr[i]>mn2){
            mn2=arr[i];
        }
    }
    printf("%d",mn1*mn2);
}