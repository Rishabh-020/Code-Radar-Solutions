#include <stdio.h>

int main() {
    int num,pos=1;
    scanf("%d",&num);
    while(!(num&1)){
        num>>=1;
        pos++;
    }
    printf("%d",pos);
    return 0;
}