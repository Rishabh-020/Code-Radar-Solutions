#include<stdio.h>
#include<stdlib.h>
int sum_digit(int num){
    int N=0,count=0;
    int number=abs(num);
    while(number>0){
        N=number%10;
        count+=N;
        number/=10;
    }
    printf("%d ",count);
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<num;i++){
       sum_digit(arr[i]);
    }
    return 0;
}