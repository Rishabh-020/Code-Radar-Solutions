#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);
    if(1 && (num>>31)){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}