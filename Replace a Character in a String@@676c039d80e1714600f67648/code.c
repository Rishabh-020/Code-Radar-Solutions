#include <stdio.h>

int main(){
    char str[1000],num1,num2;
    scanf("%s",&str);
    scanf("%c",&num1);
    scanf("%c",&num2);
    for(int i=0;i!='\n';i++){
        if(arr[i]=='num1'){
            arr[i]='num2';
        }
    }
    printf("%s",str);
    return 0;
}