#include <stdio.h>


int main() {
    int num;
    char ch;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        ch='A';
        for(int j=1;j<=i;j++){
            printf("%d ",ch);
            ch++;
        }
    }
    return 0;
}