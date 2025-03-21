#include<stdio.h>
#include<string.h>
int longest_word(char str[]){
    int len=strlen(str);
    int max_start=0,max_end=0,max_lenght=0,word_length=0;
    for(int i=0;i<len;i++){
        if(str[i]==' '||str[i]=='\0'){
            if(word_length>0 && max_lenght<word_length){
                max_start=0;
                max_end=word_length
            }max_start=i+1;
            word_length=0;
        }else{
            word_length++;
        }
    }
    for(int i=max_start;i<max_start+max_end;i++)
    printf("%c",str[i]);
}
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    longest_word(str);
    return 0;
}