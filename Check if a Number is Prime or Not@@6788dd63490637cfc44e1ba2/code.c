#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        int is_prime;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                printf("Not Prime");
            }
        }printf("Prime");
    }
    return 0;
}