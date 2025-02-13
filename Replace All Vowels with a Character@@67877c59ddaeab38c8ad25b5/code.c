#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    if(arr[strlen(arr)-1]=='\n'){
        arr[strlen(arr)-1]='\0';
    }
    char replace;
    scanf("%c",&replace);
      for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
            arr[i] = replace;
        }
        printf("%c", arr[i]);
    }
    return 0;
}