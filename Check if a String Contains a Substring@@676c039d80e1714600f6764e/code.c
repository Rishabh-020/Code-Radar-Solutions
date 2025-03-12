#include<stdio.h>
#include<string.h>
int main(){
    int j=0;
    char str[1000];
    fgets(str,1000,stdin);
    if(str[strlen(str)-1]=='\0')str[strlen(str)-1]='\0';
    int len=strlen(str)-1;
    char find[1000];
    scanf("%s",&find);
    for(int i=j;i<len;i++){
        // if(arr[i]==' '){
        //     word=
        //     if(strcmp())
        // }
    }
    return 0;
}