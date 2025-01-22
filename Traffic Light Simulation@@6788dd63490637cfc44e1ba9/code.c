#include <stdio.h>

int main() {
    char str;
    scanf("%c",&str);
    if(str=='R'){
        printf("Stop");
    }else if(str=='G'){
        printf("Go");
    }else if(str=='Y'){
        printf("Slow Down");
    }else{
        printf("Invalid input");
    }
    return 0;
}