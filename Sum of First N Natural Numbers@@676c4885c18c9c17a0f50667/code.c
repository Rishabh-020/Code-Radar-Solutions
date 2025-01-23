#include <stdio.h>


int main() {
    int num,sum=0;
    scanf("%d",&num);
    while(num>0){
        sum+=num;
        num--;
    }
    printf("%d",sum);
    return 0;
}