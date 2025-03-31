#include <stdio.h>
#include <limits.h>
int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",arr[i]);
    int min=INT_MAX,max=INT_MIN;
    for(int i=0;i<num;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d %d",min,max);
}