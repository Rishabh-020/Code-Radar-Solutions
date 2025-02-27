#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=strlen(str),count=1;
    if(str[len-1]=='\n'){
        str[len-1]='\0';
    }
    if(str[0]=' '){
        printf("%d",0);
        return 0;
    }
    for(int i=0;i<len-1;i++){
        if(str[i]==' '){count++;}
    }printf("%d",count);
    return 0;
}