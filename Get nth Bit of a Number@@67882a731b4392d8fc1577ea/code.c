#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if((num1<<num2) & 1){
        printf("Set");
    }else{
        printf("Not Set");
    }
}