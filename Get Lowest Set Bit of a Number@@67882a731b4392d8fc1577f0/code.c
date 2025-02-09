#include <stdio.h>

int main() {
    int num1,position=1;
    scanf("%d",&num1);
    while((num&1)==0){
        num>>=1;
        position++;
    }
    printf("%d",position);
    return 0;
}