#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<num-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%c","*");
        }
        printf("\n");
    }
    return 0;
}