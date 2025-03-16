#include<stdio.h>
#include<string.h>
int main(){
    char str1[1000],str2[1000];
    fgets(str1,1000,stdin);
    int len1=strlen(str1);
    if(str1[len1-1]=='\n'){
        str1[len1-1]='\0';
    }
    char temp[len1];
    fgets(str2,1000,stdin);
    int len2=strlen(str2);
    if(str2[len2-1]=='\n'){
        str2[len2-1]='\0';
    }
    strcpy(temp,str1);
    strcat(temp,str1); 
    if(strstr(temp,str2)!=NULL) printf("Yes")
    else printf("no");
    return 0;
}