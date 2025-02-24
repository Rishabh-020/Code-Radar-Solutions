#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[1000],count=1;
    fgets(str,1000,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';
    }
    for(int i=0;i<len-1;i++){
        if(str[i]!='0' || str[i]!='1'){
            count=0;
        }
    }
    if(count==1){
          printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}