#include<stdio.h>
#include<stdlib.h>
int caesarCipher(char message[],int shift,char encrypted[]){
    for(int i=0;i!='\0';i++){
        if(message[i]!=' '){
            encrypted[i]=(message[i]+shift)%26;
        }
    }
    return atio(encrypted);
}