#include <stdio.h>

int rev_array(int arr[],int n){
    int rev[n],num=0;
    for(int i=n-1;i<=0;i--){
        arr[num]=rev[i];
        num++;
    }
    if(arr[n]==rev[n]){
        printf("YES");
    }else{
        printf("NO");
    }
}
int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    rev_array(arr,num);
    return 0;
}