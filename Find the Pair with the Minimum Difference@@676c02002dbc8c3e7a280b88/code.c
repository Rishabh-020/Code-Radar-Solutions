#include<stdio.h>
int absolute_diff(int arr[],int num){
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-i-1;j++){
            if(arr[i]-arr[j]==1 && arr[i]-arr[j]>0){
                printf("%d %d\n",arr[i],arr[j]);
            }else if(arr[j]-arr[i]==1 && arr[j]-arr[i]>0){
                printf("%d %d\n",arr[j],arr[i]);
            }
            break;
        }
    }
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