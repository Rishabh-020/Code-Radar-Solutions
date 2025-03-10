#include<stdio.h>
#include<string.h>
int find_count(char str[],char target){
    char freq[256]={0},store=' ';
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        freq[str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==target){
            count=freq[str[i]];
        }
    }
    printf("%d",count);
}
int main(){
    char str[1000],target;
    fgets(str,1000,stdin);
    int len=str[strlen(str)-1];
    if(str[len]=='\n')str[len]='\0';
    scanf("%c",&target);
    find_count(str,target);
    return 0;
}