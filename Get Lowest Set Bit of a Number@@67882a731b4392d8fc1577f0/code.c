#include <stdio.h>

int main() {
    int num,pos=1;
    scanf("%d",&num);
     if (num == 0) {
        printf("%d",0);
        return 0;
    }
    while(!(num&1)){
        num>>=1;
        pos++;
    }
    printf("%d",pos);
    return 0;
}