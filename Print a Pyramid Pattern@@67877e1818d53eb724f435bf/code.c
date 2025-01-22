#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int j=2;j<=num+1;j++){
            if(j<=num-i+1){
                printf(" ");
            }else{
                printf("*");
            }
        }        
        printf("\n");
    }
    return 0;
}