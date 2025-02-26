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
        for(int j=1;j<len-i;j++){
            if(tolower(str[i])==tolower(str[j])){
                printf("No");
                return 0;
            }
        }
    }
    printf("Yes");
    return 0;
}