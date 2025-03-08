#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[1000];
    int freq[256]={0};
    fgets(str,1000,stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    for(int i=0;str[i]!='\0';i++){
        for(int j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                freq[str[i]]++;
            }
        }
    }
    for(int i=0;str[i]!='\0';i++){
        printf("%c: %d\n",str[i],freq[str[i]]);
    }
    return 0;
}