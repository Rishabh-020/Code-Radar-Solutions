#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    scanf("%s",&str);
    int len=strlen(str)-1;
    if(str[len]=='\n'){
        str[len]='\0';
    }
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(strcmp(str[i],str[j])==0){
                printf("%c",str[i]);
                return 0;
            }
        }
    }
    printf("-");
    return 0;
}