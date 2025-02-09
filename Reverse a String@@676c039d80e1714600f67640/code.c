#include <stdio.h>
#include<string.h>

void rev_string(char arr[],int num){
    for(int i=num;i>=0;i--){
        printf("%c",arr[num]);
    }
}
int main(){
    char arr[1000];
    scanf("%s",arr);
    int len=sizeof(arr)/sizeof(arr[0]);
    rev_string(arr,len);
    return 0;
}
