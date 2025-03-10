#include<stdio.h>
#include<string.h>
int count_freq(char arr[],int num){
    int count_freq[256]={0};
    for(int i=0;arr[i]!='\0';i++){
        count_freq[arr[i]]++;
    }
    int count=0;
    int result=' ';
    for(int i=0;i<256;i++){
        if(count_freq[i]>count){
            count=count_freq[i];
            result=char(i);
        }
    }
    printf("%d",result);
}
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=str[strlen(str)-1];
    if(str[len]=='\n')str[len]='\0';
    count_freq(str,len);
    return 0;
}