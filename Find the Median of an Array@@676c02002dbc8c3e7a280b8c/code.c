#include <stdio.h>

void median(int arr[],int num){
    if(num%2!=0){
        printf("%d",arr[(num-1)/2]);
    }
    else{
        printf("%d",(arr[(num-1)/2]+arr[num/2])/2);
    }
}
int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    median(arr,num);
    return 0;
}