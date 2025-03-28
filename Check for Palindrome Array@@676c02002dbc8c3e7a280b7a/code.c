#include <stdio.h>

// int rev_array(int arr[],int n){
//     int start=0,end=n-1;
//     while(start<end){
//         if(arr[start]!=arr[end]){
//             return 0;
//         }
//         start++;
//         end--;
//     }
// }
// int main() {
//     int num;
//     scanf("%d",&num);
//     int arr[num];
//     for(int i=0;i<num;i++){
//         scanf("%d",&arr[i]);
//     }
//     if(num==1){
//         printf("YES");
//         return 0;
//     }
//     if(rev_array(arr,num)){
//         printf("YES");
//     }else{
//         printf("NO");
//     }
//     return 0;
// }

int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    for(int i=0;i<num/2;i++){
        if(arr[i]!=arr[num-i-1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}










