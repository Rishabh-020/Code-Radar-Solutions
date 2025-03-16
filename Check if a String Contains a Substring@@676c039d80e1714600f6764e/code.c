#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=strlen(str)-1;
    if(str[len]=='\0')str[len]='\0';
    char find[1000];
    scanf("%s",&find);
    if (strstr(str,find)!=NULL) printf("Yes");
    else printf("no");
    return 0;
}