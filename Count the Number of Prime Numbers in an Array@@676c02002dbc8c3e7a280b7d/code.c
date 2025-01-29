#include <stdio.h>

int  prime(int num){
    if(num<=1){
        return 0;
    }
    if(num==2||num==3){
        return 1;
    }
    if(num%2==0){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

void count(int arr[],int n){
    int count=0;
    for(int i=0;i<num;i++){
        if(prime(arr[i])){
            count++;
        }
    }
    printf("%d",count);
}
int main() {
    int num,count=0,number;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&num);
    }
    count(arr,num);
    return 0;
}