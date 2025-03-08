#include<stdio.h>
#include<string.h>
int main(){
    char str1[1000],str2[1000];
    fgets(str1,1000,stdin);
    if(str1[strlen(str1)-1]=='\n'){
        str1[strlen(str1)-1]='\0';
    }
    fgets(str2,1000,stdin);
    if(str2[strlen(str2)-1]=='\n'){
        str2[strlen(str2)-1]='\0';
    }
    return 0;
}