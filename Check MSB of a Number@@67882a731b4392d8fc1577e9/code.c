#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);
    int msb=1 >> 31;
    if(num && (1>>31)){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}