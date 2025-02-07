#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(j<=num-i){
                printf(" ");
            }else{
                printf("%d",j);
            }
        }
        for(int k=2;k<=num;k++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}