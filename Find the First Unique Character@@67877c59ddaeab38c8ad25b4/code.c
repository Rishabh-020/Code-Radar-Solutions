#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int count=0
    char str[1000],find;
    fgets(str,1000,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';
    }
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(tolower(str[i])!=tolower(str[j]) && count==0){
                find=str[i];
                count=1
            }
        }if(find==' '){
            continue;
        }else{
            break;
        }
    }
    printf("%c",find);
}