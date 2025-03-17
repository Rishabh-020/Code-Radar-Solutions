#include<stdio.h>
#include<string.h>
void long_pal(char str[],int len){
    int start=0,end=1;
    for(int i=0;i<len;i++){
        int left=i,right=i;
        while(left>=0 && right<len && str[left]==str[right]){
            if(right-left+1>end){
                start=left;
                end=right+1-left;
            }left--;
            right++;
        }
        left=i,right=i+1;
        while(left>=0 && right<len && str[left]==str[right]){
            if(right-left+1>end){
                start=left;
                end=right+1-left;
            }left--;
            right++;
        }
    }
    for(int i=start;i<start+end;i++){
        printf("%c",str[i]);
    }
}
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';
        len--;
    }
    long_pal(str,len);
    return 0;
}