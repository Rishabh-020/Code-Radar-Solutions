#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;i<num-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}