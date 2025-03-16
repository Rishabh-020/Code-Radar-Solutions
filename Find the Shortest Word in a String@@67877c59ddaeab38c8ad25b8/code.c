#include<stdio.h>
int shortest_word(char arr[]){
    int len=strlen(arr);
    int short_len=len,find_index=0,small_index=0,length=0;
    for(int i=0;i<=len;i++){
        if(arr[i]==' '|| arr[i]=='\0'){
            if(length<short_len){
                find_index=i-1;
                short_len=length;
            }
        }else{
            length++;
        }
    }
    for(int i=find_index;i<find_index+short_len;i++){
        printf("%c",arr[i]);
    }
}
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    if(str[strlen(str)-1]=='\n')str[strlen(str)-1]='\0';
    shortest_word(str);
    return 0;
}