#include <stdio.h>

int main() {
    int num,a=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}