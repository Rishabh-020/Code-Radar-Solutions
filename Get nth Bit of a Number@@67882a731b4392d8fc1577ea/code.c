#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(1 & (num1>>num2)){
        printf("Not Set");
    }else{
        printf("Set");
    }
}