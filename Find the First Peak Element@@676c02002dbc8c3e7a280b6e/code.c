#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d\n",arr[i]);
    }
    for(int i=0;i<num;i++){
        if(arr[i]>arr[i+1] && arr[i-1]<arr[i]){
            printf("%d",arr[i]);
        }
    }
    

    return 0;
}