#include<stdio.h>
#include<string.h>
int longest(int arr[],int num){
    int hash[1000]={0},max=0;
    for(int i=0;i<num;i++)hash[arr[i]]=1;
    for(int i=0;i<num;i++){
        if(hash[arr[i]-1]==0){
            int n=arr[i];
            int count=0;
            while(hash[n]){
            count++;
            n++;
            }
        }if(max<count)max=count;
    }printf("%d 1",max);
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    longest(arr,num);
    
    return 0;
}