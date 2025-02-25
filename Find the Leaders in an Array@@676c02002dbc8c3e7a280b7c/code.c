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
    for(int i=1;i<num-1;i++){
        for(int j=2;j<num-1-i;j++){
            if(arr[i]>arr[j]){
                now=1;
            }else{
                now=0;
            }
        }
        if(now==1){
            printf("%d ",arr[i]);
        }
        // if(arr[i]>=arr[i+1]){
        //     printf("%d ",arr[i]);
        // }
    }printf("%d",arr[num-1]);
    return 0;
}