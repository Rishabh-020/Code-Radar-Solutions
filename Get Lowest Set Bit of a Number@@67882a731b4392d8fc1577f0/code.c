#include <stdio.h>

int main() {
    int num,position=0;
    scanf("%d",&num);
    while((num&1)==0){
        num>>=1;
        position++;
    }
    printf("%d",position);
    return 0;
}