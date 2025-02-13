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
        printf("%d\n",count);
        printf("%d",1);
    }else{
        printf("%d",0);
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
        count+=palindrome(arr[i]);
    }
    printf("%d",count);
    return 0;
}