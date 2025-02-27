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
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                return  0;
            }
        }
    }
    printf("%d",-1);
    return 0;
}