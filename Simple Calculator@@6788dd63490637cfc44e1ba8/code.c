#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        printf("%d",a+b);
    }else if(c=='-'){
        if(a>b){
        printf("%d",a-b);}
        else{
            printf("%d",b-a);
        }
    }else if(c=='*'){
        printf("%d",a*b);
    }else if(c=='/'){
        if(b==0){
            printf("%d",0);
        }else{
        printf("%d",a/b);}
    }else{
        printf("error");
    }
    return 0;
}