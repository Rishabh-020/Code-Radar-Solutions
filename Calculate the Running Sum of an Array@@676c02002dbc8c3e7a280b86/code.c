#include<stdio.h>
int main(){
    int num,sum=0;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]+sum);
        sum+=arr[i];
    }
    return 0;
}