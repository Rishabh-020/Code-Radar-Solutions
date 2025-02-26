#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        if(arr[i]==0){
            arr[i]=arr[num-1];
        }
        printf("%d ",arr[i]);
    }
    return 0;
}