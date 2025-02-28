#include<stdio.h>
#include<limits.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int min1=MAX_NUM,min2=MAX_NUM;
    for(int i=0;i<num-1;i++){
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
        }else if(arr[i]<min2&& arr[i]!=min1){
            min2=arr[i];
        }
    }if(min2==MAX_NUM){
        printf("-1");
    }else{
        printf("%d",min1);
    }
    return 0;
}