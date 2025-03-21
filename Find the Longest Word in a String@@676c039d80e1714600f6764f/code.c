#include<stdio.h>
#include<string.h>
// int longest_word(char str[]){
//     int len=strlen(str);
//     int max_len=0,word_len=0;
//     int start_index=0,find_index=0;
//     for(int i=0;i<=len;i++){
//         if(str[i]==' '|| str[i]=='\0'){
//             if(word_len>0 && max_len<word_len){
//                 max_len=word_len;
//                 start_index=find_index;
//             }
//             find_index=i+1;
//             word_len=0;
//         }else{
//             word_len++;
//         }
//     }
//     for(int i=start_index;i<max_len+start_index;i++){
//         printf("%c",str[i]);
//     }//printf("\n nice");
// }
int longest_word(char arr[]){
    int len=strlen(arr);
    int start=0,end=1,max=0,word_len=0;
    for(int i=start;i<len;i++){
        if(arr[i]==' '|| arr[i]=='\0'){
            if(word_len>0 && max<word_len){
                end=i;
                start=0;   
            }start=i+1;
            word_len=0;
        }else{
            word_len++;
        }
    }
    for(int i=start;i<start+end;i++){printf("%c",arr[i]);}
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