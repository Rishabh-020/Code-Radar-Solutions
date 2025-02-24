#include<stdio.h>
#include<ctype.h>
int main(){
    int num,count=1,N=0,len=0;
    scanf("%d",&num);
    if(num==' '){
        printf("Yes");
        return 0;
    }
    while(num>0){
        N=num%10;
        if(isalpha(N)){
            printf("No");
            return 0;
        }
        if(N==1 || N==0){
            len++;
        }else{
            count=0;
        }
        num/=10;
    }
    if(count==0){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}