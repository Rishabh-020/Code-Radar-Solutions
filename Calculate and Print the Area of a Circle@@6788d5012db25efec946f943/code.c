#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float area=0.0,num=0.0;
    scanf("%d",&num);
    area=3.14*num;
    printf("Area: %.2f",area);
    return 0;
}