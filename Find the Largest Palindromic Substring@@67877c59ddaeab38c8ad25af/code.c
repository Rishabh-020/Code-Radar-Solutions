#include<stdio.h>
#include<string.h>
int long_pal(char str[],int len){
    if(len%2==0){
        int left=len/2,right=len/2;
    }else{
        int left=(len+1)/2,right=(len+1)/2;
        while((left+right-1)){
            if(str[left]==str[right]){
                left--;
                right++;
            }
        }
        for(int i=left;i<=right;i++){
        printf("%c",str[i]);
    }
    }
}
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=strlen(str);
    if(str[len-1]=='\n')str[len-1]='\0';
    long_pal(str,len);
    return 0;
}