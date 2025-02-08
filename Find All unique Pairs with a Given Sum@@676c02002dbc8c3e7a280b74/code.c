#include <stdio.h>
void find_sum(int arr[],int num,int target){
    for(int i=0;i<num-1;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d\n",arr[i],arr[j]);
            }break;
        }
    }
}
int main() {
    int num;
    scanf("%d",&num);
    int arr[num],target;
    for(int i=0;i<num;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&target);
    find_sum(arr,num,target);
    return 0;
}