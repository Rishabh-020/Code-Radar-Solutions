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
        int c=str[i]
        if(str[i]>='a'&&str[i]<='z'){
            c=c-32;
        }
        putchar(c);
    }
    return 0;
}