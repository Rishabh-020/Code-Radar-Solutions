
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000
int longest(int arr[],int num){
    int hash[MAX]={0};  
    int max_len=0;
    for(int i=0;i<num;i++)
    hash[arr[i]]=1;
    for(int i=0;i<num;i++){
        if(hash[arr[i]-1]==0){
            int initial=arr[i];
            int count=1;
            while(hash[initial+1]==1){
                count++;
                initial++;
            }
            if(count>max_len)
            max_len=count;
        }
    }
    printf("%d",max_len);
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    longest(arr,num);
    return 0;
}


