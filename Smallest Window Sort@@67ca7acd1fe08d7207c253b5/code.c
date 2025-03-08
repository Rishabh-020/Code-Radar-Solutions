#include<stdio.h>
int main(){
    int num,arr_len;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&arr_len);
        int arr[arr_len];
        for(int j=0;j<arr_len;j++){
            scanf("%d ",arr[i]);
        }
    }
    return 0;
}