#include<stdio.h>
int main(){
    int num,num1=0;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        while (arr[i] > 0 && arr[i] <= num && arr[arr[i] - 1] != arr[i]) {
            int temp = arr[i];
            arr[i] = arr[arr[i] - 1];
            arr[temp - 1] = temp;
        }
    }
    for(int i=0;i<num;i++){
        if(arr[i]!=i+1){
            printf("%d",i+1);
            return 0;
        }
    }
    printf("%d",num+1);
    return 0;
}