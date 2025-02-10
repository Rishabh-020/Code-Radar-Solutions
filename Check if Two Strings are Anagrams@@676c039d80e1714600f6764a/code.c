#include <stdio.h>
#include<string.h>

int main() {
    char str1[1000];
    char str2[1000];
    fgets(str1,sizeof(str1),stdin);
    if(str1[strlen(str1)-1]=='\n'){
        str1[strlen(str1)-1]='\0';
    }
    fgets(str2,sizeof(str2),stdin);
    if(str2[strlen(str2)-1]=='\n'){
        str2[strlen(str2)-1]='\0';
    }
    int len1=strlen(str1)-1,len2=strlen(str2)-1;
    if(len1==len2){
        for(int i=0;i<str1;i++){
        
        }
    }else{
        printf("No");
    }
    return 0;
}