#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int j=1;j<=num-1;j++){
            if(j<=num-i-1){
                printf(" ");
            }else{
                printf("*");
            }
        }
        
        printf("\n");
    }
    return 0;
}