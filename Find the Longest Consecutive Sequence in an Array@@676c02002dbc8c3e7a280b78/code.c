#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000
int longest(int arr[],int num){
    int hash[MAX]={0};
    for(int i=0;i<num;i++)hash[arr[i]]=1;
    int max_len=0;
    for(int i=0;i<num;i++){
        if(hash[arr[i]-1]==0){
            int n=arr[i];
            int count=0;
            while(hash[n]){
            count++;
            n++;
            }
            if(max_len < count)max_len=count;
        }
    }printf("%d 1",max_len);
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    longest(arr,num);
    return 0;
}