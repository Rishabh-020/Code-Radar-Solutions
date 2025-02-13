#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d ",&arr[i]);
    }
    printf("%d ",arr[0]);
    for(int i=1;i<num;i++){
        printf("%d ",arr[i]+i-1);
    }
    return 0;
}