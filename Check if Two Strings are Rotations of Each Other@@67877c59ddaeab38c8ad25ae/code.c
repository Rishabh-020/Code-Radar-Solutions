#include<stdio.h>
#include<string.h>
int main(){
    char str1[1000],str2[1000];
    fgets(str1,1000,stdin);
    int len1=strlen(str1)-1,count=0;
    if(str1[len1]=='\n'){
        str1[len1]='\0';
    }
    fgets(str2,1000,stdin);
    int len2=strlen(str2)-1;
    if(str2[len2]=='\n'){
        str2[len2]='\0';
    }
    for(i=1;i<len1;i++){
        if(str1[i]==str2[i+1] || str[i]==str2[i-1])count++;
    }
    if(count==len1){
        printf("Yes");
    }else printf("No");
    return 0;
}