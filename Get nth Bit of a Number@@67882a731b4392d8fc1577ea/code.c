#include<stdio.h>
int convert_binary(int num,int num2){
    int bin[32],index=0;
    while(num>0){
        bin[index]=num%2;
        index++;
        num/=2;
    }
    printf("%d",bin[num2]);
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    convert_binary(num1,num2);
    return 0;
}