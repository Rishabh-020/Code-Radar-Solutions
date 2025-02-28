#include<stdio.h>
#include<limits.h>
int main(){
    int num,num1=0;
    scanf("%d",&num);
    int arr[num],hash[1000]={0};
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
        hash[arr[i]]=1;
    }
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<num;i++){
        if(arr[i]>max)max=arr[i];
        if(arr[i]<min)min=arr[i];
    }
    for(int i=min;i<=max;i++){
        if(hash[i]==0){
            printf("%d",hash[i]);
            return 0;
        }
    }
    printf("%d",max+1);
    return 0;
}