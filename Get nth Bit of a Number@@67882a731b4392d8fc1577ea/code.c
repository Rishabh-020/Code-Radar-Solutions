#include<stdio.h>
int binary(int num,int num2){
    int bin[32],index=0;
    while(num>0){
        binary[index]=num%2;
        index++;
        num/=2;
    }
    printf("%d",bin[index-1-num2])
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    convert_binary(num1,num2);
    return 0;
}