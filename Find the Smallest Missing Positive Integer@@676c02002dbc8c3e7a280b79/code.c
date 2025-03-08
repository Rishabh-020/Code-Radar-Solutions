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
    for(int i=0;i<num;i++){
        if(arr[i]!=i+1){
            printf("%d",i+1);
            return 0;
        }
    }
    printf("%d",num+1);
    return 0;
}