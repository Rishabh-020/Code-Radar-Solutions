
#include<stdio.h>
#include<stdlib.h>
#define MAX 100000
int longest(int arr[],int n){
    // int hash[MAX]={0};
    // for(int i=0;i<n;i++)
    // hash[arr[i]]=1;
    // int max_len=0;
    // for(int i=0;i<n;i++){
    //     if(hash[arr[i]-1]==0){
    //         int num=arr[i];
    //         int count=0;
    //         while(hash[num]){
    //         count++;
    //         num++;
    //         }
    //         if(count>max_len)
    //         max_len=count;
    //     }
    // }printf("%d",max_len);
    int hash[10000]={0},max_len=0;
    for(int i=0;i<num;i++)
    hash[arr[i]]=1;
    for(int i=0;i<num;i++){
        if(hash[arr[i]-1]==0){
            int initial=hash[arr[i]];
            int count=1;
            while(hash[i]){
                count++;
                arr[i]++;
            }
            if(count>max_len)
            max_len=count;
        }
    }printf("%d",max_len);
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    longest(arr,num);
    return 0;
}
