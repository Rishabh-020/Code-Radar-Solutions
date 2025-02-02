#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);
    int msb=1 << 31;
    if(num && msb){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}