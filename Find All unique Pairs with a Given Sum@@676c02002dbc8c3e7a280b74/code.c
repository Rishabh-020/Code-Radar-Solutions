#include <stdio.h>
void find_sum(int arr[],int num,int target){
    int hash[10000] = {0};
    for(int i=0;i<num-1;i++){
       int complain=target-arr[i];
       if(hash[complain]){
        printf("%d %d\n",complain,arr[i]);
        hash[complain]=0;
       }
    }
}
int main() {
    int num;
    scanf("%d",&num);
    int arr[num],target;
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    find_sum(arr,num,target);
    return 0;
}