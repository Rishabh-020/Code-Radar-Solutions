#include<stdio.h>
#include<string.h>
int count_freq(char arr[],int num){
    char unique[num];
    int count=0,freq[256]={0};
    for(int i=0;i<num;i++){
        freq[unique[i]]++;
    }
    char find=' ';
    int max=0;
    for(int i=0;i<256;i++){
        if(freq[i]>max){
            max=freq[i];
            find=i;
        }
    }
    printf("%c",find);
}
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=str[strlen(str)-1];
    if(str[len]=='\n')str[len]='\0';
    count_freq(str,len);
    return 0;
}