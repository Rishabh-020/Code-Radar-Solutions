#include <stdio.h>


int main() {
    int num,a=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            printf("m");
        }
        for(int k=1;k<=num-1;k++){
            printf("%d",i);
            i--;
        }
        printf("\n");
    }
    return 0;
}