#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[1000],string;
    fgets(str,1000,stdin);
    int len=strlen(str),count=0;
    if(str[len-1]=='\n'){
        str[len-1]='\0';
    }
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(tolower(str[i])!=tolower(str[j])){
                string=str[i];
                count=1;
            }
        }
    }
    if(count==1){
        printf("%c",string);
    }else{
        printf("-");
    }
    return 0;
}