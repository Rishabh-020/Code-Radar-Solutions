#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num&1==0){
        printf("Not Set");
    }else{
        printf("Set");
    }
    return 0;
}