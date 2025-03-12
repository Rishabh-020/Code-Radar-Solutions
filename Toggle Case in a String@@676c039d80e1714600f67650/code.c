#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char string[1000];
    fgets(string,1000,stdin);
    int len=strlen(string)-1;
    if(string[len]=='\0')string[len]='\n';
    for(int i=0;i<=len;i++){
        // if((int)string[i]<97){
        //     string[i]+=32;
        //     printf("%c",string[i]);
        // }else if(string[i]==' ') break;
        // else{
        //     string[i]-=32;
        //     printf("%c",string[i]);
        // }
        if(islower(string[i])){
            printf("%c",toupper(string[i]));
        }else if(isupper(string[i])){
            printf("%c",tolower(string[i]));
        }else{
            printf("%c",string[i]);
        }
    }
    return 0;
}