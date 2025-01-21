#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num>=18){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
    return 0;
}