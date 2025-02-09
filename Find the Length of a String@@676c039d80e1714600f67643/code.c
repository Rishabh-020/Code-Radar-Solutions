#include <stdio.h>
#include<string.h>

int main() {
    char arr[1000];
    scanf("%s",&arr);
    printf("%lu",strlen(arr)-1);
    return 0;
}