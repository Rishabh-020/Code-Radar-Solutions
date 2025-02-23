#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        if(arr[i]<arr[i+1]){
            arr[i]=arr[i+1];
        }
    }
    for(int i=0;i<num-1;i++){
        printf("%d ",arr[i]);
    }
    printf("%d",arr[num-1]);
    return 0;
}