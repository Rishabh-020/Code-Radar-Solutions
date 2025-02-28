#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[j]>arr[j+1]){
                arr[i]=arr[j];
            }
        }
    }
    for(int i=0;i<num-1;i++){
        printf("%d ",arr[i]);
    }
    printf("%d",-1);
    return 0;
}