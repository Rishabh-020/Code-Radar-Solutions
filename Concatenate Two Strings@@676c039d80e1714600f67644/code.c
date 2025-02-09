#include <stdio.h>

int main() {
    char arr[1000],arr1[1000];
    fgets(arr,sizeof(arr),stdin);
    // int len1=strlen(arr);
    //   if (len1 > 0 && arr[len1 - 1] == '\n') {
    //     arr[len1 - 1] = '\0';
    // }
    fgets(arr1,sizeof(arr1),stdin);
    // int len2=strlen(arr1);
    //   if (len2 > 0 && arr1[len2 - 1] == '\n') {
    //     arr1[len2 - 1] = '\0';
    // }
    printf("%s%s",arr,arr1);
    return 0;
}