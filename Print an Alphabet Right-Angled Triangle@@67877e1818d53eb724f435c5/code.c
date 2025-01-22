#include <stdio.h>


int main() {
    int num;
    char c="A";
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",c);
        }printf("\n");
        c++;
    }
    return 0;
}