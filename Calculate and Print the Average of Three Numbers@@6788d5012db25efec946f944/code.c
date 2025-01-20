#include <stdio.h>


int main() {
    int a,b,c;
    double av;
    scanf("%d %d %d",&a,&b,&c);
    av=(a+b+c)/3.0;
    printf("Average: %.2lf",av);
    return 0;
}