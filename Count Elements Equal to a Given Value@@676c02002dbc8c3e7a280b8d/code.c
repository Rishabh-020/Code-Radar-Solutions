#include <stdio.h>

int main() {
    int num,target;
    scanf("%d %d",&num,&target);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<num;i++){
        if(arr[i]<=target){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}