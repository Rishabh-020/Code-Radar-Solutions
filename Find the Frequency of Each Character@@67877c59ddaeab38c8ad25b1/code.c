#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int freq[256]={0};
    fgets(str,1000,stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    for(int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++){
        if(freq[str[i]]>0){
            printf("%c: %d\n",str[i],freq[str[i]]);
            freq[str[i]]=0;
        }
    }
    return 0;
}