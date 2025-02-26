#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str1[1000],str2[1000];
    fgets(str1,1000,stdin);
    int len=strlen(str1)-1,j=0,pal=1;
    if(str1[len]=='\n'){
        str1[len]='\0';
    }
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]!=' '){
            str2[j]=str1[i];
            j++;
        }
    }
    str2[j]='\0';
    for(int i=0;i<j/2;i++){
        if(str2[i]!=str1[j-i]-1){
            pal=0;
            break;
        }
    }
    if(pal==1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}