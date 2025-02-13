#include<stdio.h>
int palindrome(int num){
    int N=0,count=0;
    int number=num;
    while(number>0){
        N=number%10;
        count=count*10+N;
        number/=10;
    }
    if(num==count){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int num,count=0;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        if(palindrome(arr[i])==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}