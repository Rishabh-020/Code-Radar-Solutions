#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        printf(a+b);
    }else if(c=='-'){
        printf(a-b);
    }else if(c=='*'){
        printf(a*b);
    }else if(c=='/'){
        printf(a/b);
    }
    return 0;
}