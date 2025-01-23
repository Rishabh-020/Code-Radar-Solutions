#include <stdio.h>


int main() {
    int num,a=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=num;j>=i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=num-1;k++){
            printf("%d",i);
            i--;
        }
        printf("\n");
    }
    return 0;
}