#include<stdio.h>
int find_maj(int arr[],int num){
    int count=0,candidate=-1;
    for(int i=0;i<num;i++){
        if(count==0){
            candidate=arr[i];
            count=1;
        }else if(arr[i]==candidate)count++;
        else count--;
    }
    count=0;
    for(int i=0;i<num;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count>num/2){
        return candidate;
    }
    return -1;
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    printf("%d",find_maj(arr,num));
    return 0;
}