#include <stdio.h>
// void find_sum(int arr[num],int num){
//     for(int i=0;i<num;i++){
//         for(int j=i+1;j<num;j++){
//             if(arr[i]+arr[j]==target){
//                 printf("%d %d",arr[i],arr[j]);
//                 continue;
//             }
//         }
//     }
// }
int main() {
    int num;
    scanf("%d",&num);
    int arr[num],target;
    for(int i=0;i<num;i++){
        scanf("%d ",&arr[i]);
    }
    // scanf("%d",&target);
    // find_sum(arr,num);
    // return 0;
}