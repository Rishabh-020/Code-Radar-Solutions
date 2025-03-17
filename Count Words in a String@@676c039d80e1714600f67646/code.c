#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    if(fgets(str,1000,stdin)==NULL){
        printf("%d",0);
        return 0;
    }
    int len=strlen(str),count=0,inword=0,now=0;
    if(str[len-1]=='\n'){
        str[len-1]='\0';
    }
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '||str[i]=='\0'){
            inword=0;
            now++;
        }else if(inword==0){
            inword=1;
            count++;
        }
    }printf("%d %d",count,now);
    return 0;
}