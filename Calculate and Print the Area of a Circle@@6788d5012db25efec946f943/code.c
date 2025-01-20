#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float area,num;
    scanf("%d",&num);
    area=3.14*num;
    printf("Area: %.2f",area);
    return 0;
}