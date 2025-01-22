#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=i;j<=num;j++){
            printf("*");
        }printf("\n");
    }
    printf("%s", welcome());
    return 0;
}