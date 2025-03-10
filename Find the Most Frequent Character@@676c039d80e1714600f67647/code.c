#include<stdio.h>
#include<string.h>
int count_freq(char arr,int num){
    char unique[num];
    int count=0,freq[256]={0};
    for(int i=0;i<num;i++){
        if(unique[unsigned char(arr[i])]==0)unique[count++]=arr[i];
        freq[unique[i]]++;
    }
    int uniq_count=0;
    char find=' ';
    for(int i=0;i<count;i++){
        if(freq[unique[i]]>uniq_count){
            uniq_count=freq[unique[i]];
            find=unique[i];
        }
    }
    printf("%c",find);
}
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=str[strlen(str)-1]-1;
    if(str[len]=='\n')str[len]='\0';
    count_freq(str,len);
    return 0;
}