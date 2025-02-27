#include<stdio.h>
int main(){
    int num,now=1;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    scanf("%d",&arr[i]);
    if(num==1){
        printf("%d",arr[0]);
        return 0;
    }
    for(int i=0;i<num-1;i++){
        // now=1;
        for(int j=i+1;j<num;j++){
            if(arr[i]<arr[j]){
                now=0;
            }
        }
        if(now==1){
            printf("%d ",arr[i]);
        }
    }printf("%d",arr[num-1]);
    return 0;
}