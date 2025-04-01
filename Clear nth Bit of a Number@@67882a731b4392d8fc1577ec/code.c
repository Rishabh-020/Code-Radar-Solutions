#include <stdio.h>
#include <math.h>
int power(int a,int b){
    int count=1;
    if(b==0){
        return 1;
    }
    while(b>0){
        count*=a;
        b--;
    }
    return count;
}
int back_number(int arr[],int num){
    int count=0;
    for(int i=0;i<num;i++){
        count+=arr[i]*((int)power(2,i));
    }
    return count;
}
int convert_binary(int num1,int num2){
    int binary[32],index=0;
    while(num1>0){
        binary[index]=num1%2;
        index++;
        num1/=2;
    }
    // if(binary[num2]==0){
        // binary[num2]=1;
    // }else{
        binary[num2]=0;
    // }
    return back_number(binary,index);
}
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    num1=num1&~(1<<num2);
    printf("%d",num1);
    return 0;
}