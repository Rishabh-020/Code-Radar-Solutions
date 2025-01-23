#include <stdio.h>


int main() {
    int num,a=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=0;j<=num;j++){
            if(j<num-i){
                printf(" ");
            }else{
                printf("%d",j);
            }
        }
        for(int k=1;k<=i-1;k++){
            printf("%d",i);
            i--;
        }
        printf("\n");
    }
    return 0;
}