#include <stdio.h>

void duplicate(int arr[],int num){
    for(int i=1;i<num;i++){
        for(int j=i;j<num;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[j]);
                break;
            }
        }
    }
}
int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    duplicate(arr,num);
    return 0;
}