#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==1 && i==num){
                printf("*");
            }
        }
    }
    return 0;
}