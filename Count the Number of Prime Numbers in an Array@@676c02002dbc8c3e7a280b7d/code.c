#include <stdio.h>
int is_prime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int num,count=0,number;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        if(is_prime(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}