#include <stdio.h>

int main() {
    int num;
    char a='A';
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=num;j<=i;j--){
            printf("%c",a);
        }
    }
}