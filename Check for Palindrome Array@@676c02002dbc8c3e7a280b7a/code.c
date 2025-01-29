#include <stdio.h>

int rev_array(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]!=arr[end]){
            return 0;
        }
        start++;
        end--;
    }
}
int main() {
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    if(rev_array(arr,num)){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}