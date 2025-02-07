#include <stdio.h>

int main() {
    int a,b=0;
    scanf("%d",&a);
    b=a&1;
    if(a%2!=0){
    printf("Set");}
    else{
        printf("Not Set");
    }
    return 0;
}