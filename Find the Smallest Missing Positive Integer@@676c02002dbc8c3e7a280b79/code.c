#include<stdio.h>
#include<limits.h>
int main(){
    int num,num1=0;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i-1;j++){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    return 0;
}