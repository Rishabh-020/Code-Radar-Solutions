#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=num;j<=num-i+1;j--){
            printf("%d ",j);
        }printf("\n");
    }
    return 0;
}