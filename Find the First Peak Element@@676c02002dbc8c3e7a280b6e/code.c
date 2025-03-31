#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    // printf("%d",arr[0]);
    for(int i=0;i<num-1;i++){
        if(arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            return 0;
        }
    } 
    if(arr[num-1]>arr[num-2]){
        printf("%d",arr[num-1]);
        return 0;
    }
    printf("-1");
}