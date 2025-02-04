#include <stdio.h>

int main() {
    int num,count=0;
    scanf("%d",&num);
    while(num%2==0 && num!=0){
        count++;
        num=num/2;
    }
    printf("%d",31-count);
    return 0;
}