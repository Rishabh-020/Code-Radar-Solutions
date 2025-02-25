#include<stdio.h>
#include <stdlib.h>
#include<limits.h>
int compare(const void *a,const void *b){
    return (*(int *)a-*(int *)b);
}
int absolute_diff(int arr[],int num){
    if(num<=1){
        printf("%d",-1);
        return 0;
    }
    int min=INT_MAX;
    int first=-1,secound=-1;
    qsort(arr,num,sizeof(int),compare);
    for(int i=0;i<num;i++){
        int diff=abs(arr[i]-arr[i+1]);
        if(diff<min){
            min=diff;
            first=arr[i];
            secound=arr[i+1];
        }
    }
    printf("%d %d",first,secound);
   return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d ",&arr[i]);
    }
    absolute_diff(arr,num);
    return 0;
}