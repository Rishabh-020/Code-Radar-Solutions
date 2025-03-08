#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int freq[1001]={0};
    char str[1000],find;
    fgets(str,1000,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';
    }
    for(int i=0;i<len;i++){
        if(str[i]!=' ')freq[str[i]]++;
    }
    for(int i=0;i<len;i++){
        if(str[i]!=' ' && freq[str[i]]==1)find=str[i];
        break;
    }
    if(find==' '){
        printf("-");
    }else
    printf("%c",find);
}