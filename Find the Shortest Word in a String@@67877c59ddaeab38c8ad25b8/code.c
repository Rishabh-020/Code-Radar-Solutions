#include<stdio.h>
#include<string.h>
// int shortest_word(char arr[]){
//     int len=strlen(arr);
//     int short_len=len,find_index=0,small_index=0,length=0;
//     for(int i=0;i<=len;i++){
//         if(arr[i]==' '|| arr[i]=='\0'){
//             if(length<short_len && length>0){
//                 small_index=find_index;
//                 short_len=length;
//             }find_index=i+1;
//             length=0;
//         }else{
//             length++;
//         }
//     }
//     for(int i=find_index;i<find_index+short_len;i++){
//         printf("%c",arr[i]);
//     }
// }
int shortest_word(char str[]){
    int len=strlen(str);
    int min_word=len,word_len=0;
    int min_start=0,find_index=0;
    for(int i=0;i<len;i++){
        if(str[i]==' '||str[i]=='\0'){
            if(word_len>0 && min_word>word_len){
                min_start=find_index;
                min_word=word_len;
            }find_index=i+1;
            word_len=0;
        }else word_len++;
    }
    for(int i=min_start;i<min_start+min_word;i++){
        printf("%c",str[i]);
    }
}
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    if(str[strlen(str)-1]=='\n')str[strlen(str)-1]='\0';
    shortest_word(str);
    return 0;
}