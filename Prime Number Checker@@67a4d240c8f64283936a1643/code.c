#include <stdio.h>

int prime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main() {
    int num1,num2;
    scanf("%d",&num1);
    for(int i-1;i<=num1;i++){
        scanf("%d",&num2);
        prime(num2);
    }
    return 0;
}