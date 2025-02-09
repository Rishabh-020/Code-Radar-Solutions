#include <stdio.h>
#include<string.h>

void rev_string(char arr[]){
    for(int i='\n';i>=0;i--){
        printf("%c",arr[i]);
    }
}
int main(){
    char arr[1000];
    scanf("%s",arr);
    printf("%s",arr);
    rev_string(arr);
    return 0;
}
