#include <stdio.h>


int main() {
    int num;
    char c;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        ch='A';
        for(int j=1;j<=i;j++){
            printf("%c ",c);
            c++;
        }printf("\n");
    }
    return 0;
}