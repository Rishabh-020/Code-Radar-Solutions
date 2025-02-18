// #include <stdio.h>

// int main() {
//     int num,count=0;
//     scanf("%d",&num);
//     for(int i=31;i>=0;i--){
//         if((num>>i)&1){
//             break;
//         }
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }

#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    while(num!=0 && num%2==0){
        num/=2;
        count++;
    }
    printf("%d",count);
    return 0;
}











