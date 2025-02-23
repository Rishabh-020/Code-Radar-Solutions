#include<stdio.h>
void absolute_diff(int arr[],int num){
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-i-1;j++){
            if(arr[j]-arr[j+1]==1){
                printf("%d %d",arr[j],arr[j+1]);
            }else if(arr[j+1]-arr[j]==1){
                printf("%d %d",arr[j+1],arr[j]);
            }
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d ",&arr[i]);
    }
    return 0;
}