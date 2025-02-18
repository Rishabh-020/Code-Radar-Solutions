#include <stdio.h>

int main() {
    int num,count=0;
    scanf("%d",&num);
    // for(int i=31;i>=0;i--){
    //     if((num>>i)&1){
    //         break;
    //     }
    //     count++;
    // }
    // printf("%d",count);
    printf("%d",-num+31);
    return 0;
}