#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b==c){
        printf("Invalid");
    }else if(a+c==b){
        printf("Invalid");
    }else if(b+c==a){
        printf("Invalid");
    }else{
        printf("Valid");
    }
    return 0;
}