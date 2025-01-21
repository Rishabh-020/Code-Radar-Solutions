#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b==c) || (a+c==b) || (c+b==a)){
        printf("Invalid");
    }else if(a==0 && b==0 && c==0){
        printf("Invalid")
    }
    else{
        printf("Valid");
    }
    return 0;
}