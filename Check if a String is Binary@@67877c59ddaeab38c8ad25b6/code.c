#include<stdio.h>
int main(){
    int num,count=1,N=0,len=0;
    scanf("%d",&num);
    while(num>0){
        N=num%10;
        if(N==1 || N==0){
            len++;
        }else{
            count=0
        }
    }
    if(count==0){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}