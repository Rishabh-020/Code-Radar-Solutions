#include <stdio.h>
// void check(int arr[],int num,int tg){
//     int coun=0;
//     for(int i=0;i<num;i++){
//         if(arr[i]>=tg){
//             count++;
//         }
//     }
//     printf("%d",count);
// }

int main() {
    int num,target;
    scanf("%d %d",&num,&target);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    check(arr,num,target);
    return 0;
}