#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=strlen(str)-1;
    if(str[len]=='\n'){
        str[len]='\0';
    }
    for(int i=0;i<len;i++){
        if(str[i]==' ')continue;
        for(int j=i+1;j<len;j++){
            if(str[j]==' ') continue;
            if(tolower(str[i])==tolower(str[j])){
                printf("No");
                return 0;
            }
        }
    }
    printf("Yes");
    return 0;
}