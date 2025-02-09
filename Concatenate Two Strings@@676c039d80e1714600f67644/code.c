#include <stdio.h>

int main() {
    char arr[1000],arr1[1000];
    fgets(arr,sizeof(arr),stdin);
    fgets(arr1,sizeof(arr1),stdin);
    printf("%s  %s",arr,arr1);
    return 0;
}