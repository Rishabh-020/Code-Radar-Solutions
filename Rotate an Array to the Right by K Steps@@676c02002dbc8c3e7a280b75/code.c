#include<stdio.h>
// int main() {
//     int num,num2;
//     scanf("%d",&num);
//     int arr[num];
//     for(int i=0;i<num;i++){
//         scanf("%d",&arr[i]);
//     }
//     scanf("%d",&num2);
//     if(num2>num){
//         num2=num2-num;
//     }
//     if(num)
//     for(int i=num-num2;i<num;i++){
//         printf("%d ",arr[i]);
//     }
//     for(int i=0;i<num-num2;i++)printf("%d ",arr[i]);
//     return 0;
// }
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    int index;
    scanf("%d",&index);
    for(int i=num-index;i<num;i++)printf("%d ",arr[i]);
    for(int i=0;i<=index;i++)printf("%d ",arr[i]);
}













