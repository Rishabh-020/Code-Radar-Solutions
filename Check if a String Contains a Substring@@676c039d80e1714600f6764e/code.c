#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    if(str[strlen(str)-1]=='\0')str[strlen(str)-1]='\0';
    int len=strlen(str)-1;
    char find[1000];
    scanf("%s",&find);
    if(strstr(str,find)!=NULL){
        printf("Yes");
    }else printf("no");
    return 0;
}