#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    scanf("%d",&arr[i]);
    for(int i=1;i<num;i++){
        if(arr[i-1]<=arr[i]){
            printf("%d ",arr[i]);
        }
    }printf("%d",arr[num-1]);
    return 0;
}