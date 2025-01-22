#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a+b==c) || (a+c==b) || (b+c==a)){
        printf("Invalid");
    }else{
        printf("Valid");
    }
    return 0;
}