#include<stdio.h>
#include<string.h>
int main(){
    char str[1000],cha=' ';
    scanf("%s",str);
    int freq[256]={0};
    // int len=strlen(str);
    // for(int i=0;i<len;i++){
    //     for(int j=i+1;i<len;j++){
    //         if(str[i]==str[j]){
    //             cha=str[i];   
    //         }
    //     }if(cha!=' '){
    //         printf("%c",cha);
    //         return 0;
    //     }
    // }
    for(int i=0;str[i]!='\0';i++){
        freq[(int)str[i]++];
    }
    for(int i=0;i<256;i++){
        if(freq[i]==1){
            printf("%c",freq[i]);
            return 0;
        }
    }
    printf("-");
    return 0;
}