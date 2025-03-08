#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int k=0;
    char str[1000],new_str[1000];
    fgets(str,1000,stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    for(int i=0;str[i]!='\0';i++){
        for(int j=i;str[j]!='\0';j++){
            if(str[i]!=str[j]){
                new_str[k]=str[i];
                k++;
            }
        }
    }
    for(int i=0;new_str[i]!='\0';i++){
        printf("%c",new_str[i]);
    }
    return 0;
}