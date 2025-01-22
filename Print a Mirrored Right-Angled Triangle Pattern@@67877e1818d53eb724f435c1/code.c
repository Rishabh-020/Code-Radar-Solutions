#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==num-1 && j==num-1){
                printf(" ");
            }else{
                printf("*");
            }
        }printf("\n");
    }
    return 0;
}