#include<stdio.h>
#include<limits.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int min1=INT_MAX,min2=INT_MAX;
    for(int i=0;i<num-1;i++){
        if(arr[i]<min1){
            min2=min1;
            min1=arr[i];
        }else if(arr[i]<min2&& arr[i]!=min1){
            min2=arr[i];
        }
    }if(min2==INT_MAX){
        printf("-1");
    }else{
        printf("%d",min2);
    }
    return 0;
}