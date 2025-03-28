#include<stdio.h>
#include<limits.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    int first=INT_MIN,secound=0;
    for(int i=0;i<num;i++){
       if(arr[i]>first){
        secound=first;
        first=arr[i];
       }else if(secound<arr[i] && arr[i]<first){
        secound=arr[i];
       }
    }
    if(secound!=INT_MIN)
    printf("%d",secound);
    else{
        printf("-1");
    }
    return 0;
}











