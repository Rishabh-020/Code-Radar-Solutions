#include <stdio.h>

int  prime(int num){
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
    int num,count=0;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&num);
    }
    for(int i=0;i<num;i++){
        if(prime(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}