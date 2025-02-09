#include <stdio.h>
#include<string.h>

void find_vowel(char arr[]){
    int len=strlen(arr);
    if(arr[len-1]=='\n'){
        arr[len-1]='\0';
        len--;
    }
    int count=0;
    for(int i=0;i<len-1;i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'
         ||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
            count++;
         }
    }
    printf("%d",count);
}

int main() {
    char arr[1000];
    fgets(arr,sizeof(arr),stdin);
    find_vowel(arr);
    return 0;
}