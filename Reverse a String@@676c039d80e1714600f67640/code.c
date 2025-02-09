#include <stdio.h>
#include<string.h>

void rev_string(char arr[],int num){
    for(int i=num;i>=0;i--){
        printf("%c",arr[num]);
    }
}
int main(){
    char arr[1000];
    scanf("%s",arr[1000]);
    rev_string(arr,1000);
    return 0;
}
