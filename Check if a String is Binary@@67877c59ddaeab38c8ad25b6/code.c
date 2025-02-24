#include<stdio.h>
#include<ctype.h>
int main(){
    char str[1000],count=0;
    fgets(str,1000,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';
    }
    for(int i=0;i<len;i++){
        if(str[i]==0 || str[i]==1){
            count=1;
        }
    }
    if(count==1){
          printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}