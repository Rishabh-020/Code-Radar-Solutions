#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    for(int i=0;i<num-1;i++){
        if(arr[num]>arr[num+1])printf("%d",arr[num]);
        return 0;
    }

}