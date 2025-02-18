#include<stdio.h>
int main(){
    int num,ma=0;
    scanf("%d",&num);
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            ma=0;
        }
        ma=1
    }
    if(ma==1){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}