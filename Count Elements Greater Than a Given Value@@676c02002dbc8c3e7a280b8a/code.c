#include<stdio.h>
int main(){
    int num1,num2,count=0;
    scanf("%d %d",&num1,&num2);
    int arr[num1];
    for(int i=0;i<num1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num1;i++){
        if(arr[i]>num2){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}