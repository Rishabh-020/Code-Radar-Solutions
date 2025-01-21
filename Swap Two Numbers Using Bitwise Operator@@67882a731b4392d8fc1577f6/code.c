#include <stdio.h>


int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    a=b;
    c=a;
    b=c;
    printf("%d %d",a,b);
    return 0;
}