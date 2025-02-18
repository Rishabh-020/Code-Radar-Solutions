#include<stdio.h>
int main(){
    int num,ma=1;
    scanf("%d",&num);
    if(num<=1){
        ma=0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            ma=0;
            break;
        }
    }
    if(ma==1){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}