#include<stdio.h>
#include<string.h>
int main(){
    char str1[1000],str2[1000];
    fgets(str1,1000,stdin);
    int len1=strlen(str1),count=0;
    if(str1[len1-1]=='\n'){
        str1[len1-1]='\0';
    }
    fgets(str2,1000,stdin);
    int len2=strlen(str2);
    if(str2[len2-1]=='\n'){
        str2[len2-1]='\0';
    }
    if(len1!=len2){
        printf("No");return 0;
    }
    for(int i=0;i<len1;i++){
        if((i>=0 && str1[i]==str2[i+1]) ||
           (str1[i]==str2[i-1] && i>0) ||
           (str1[i]==str2[i] && i<len2)){
            count++;
           }
    }
    if(count==len1){
        printf("Yes");
    }else printf("No");
    return 0;
}