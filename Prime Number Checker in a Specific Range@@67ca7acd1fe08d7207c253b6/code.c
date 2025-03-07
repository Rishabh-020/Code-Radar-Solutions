#include<stdio.h>
int is_prime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0)return 0;
    }
    return n;
}
int printPrimesInRange(int a,int b){
    int found=0;
    for(int i=a;i<=b;i++){
        if(is_prime(i)!=0){
            printf("%d ",is_prime(i));
            found=1;
        }
    }
    if(!found){
        printf("No prime numbers");
    }
}