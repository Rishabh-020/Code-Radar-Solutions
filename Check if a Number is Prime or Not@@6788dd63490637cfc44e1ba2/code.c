#include<stdio.h>

int is_prime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return 0;
        }
        return 1;
    }
}
int main(){
    int num;
    scanf("%d",&num);
    if(is_prime(num)){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}