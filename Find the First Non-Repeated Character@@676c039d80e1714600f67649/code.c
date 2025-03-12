#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    scanf("%s",&str);
    int len=strlen(str)-1;
    if(str[len]=='\n'){
        str[len]='\0';
    }
    for(int i=0;i<len;i++){
        for(int j=i+1;i<len;j++){
            if(str[i]==str[j]){
                printf("%c",str[i]);
                return 0;
            }
        }
    }
    printf("-");
    return 0;
}