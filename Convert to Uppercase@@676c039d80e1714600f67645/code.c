#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    for(int i=0;str[i]!='\0';i++){
        printf("%c",toupper(str[i]));
    }
    return 0;
}