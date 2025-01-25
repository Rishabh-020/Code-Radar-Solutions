#include <stdio.h>

int ret(int arr[],int len,int point){
    for(int i=len-point;i<len;i++){
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<len-point;i++){
        printf("%d\n",arr[i]);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int point;
    scanf("%d",&point);
    ret(arr,n,point);
    return 0;
}