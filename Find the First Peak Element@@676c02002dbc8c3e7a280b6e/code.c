#include <stdio.h>
int main() {
    int num,initial;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    initial=arr[0];
    for(int i=1;i<num-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            break;
            return 0;
        }
    }
    printf("-1");
    return 0;
}