#include<stdio.h>
#include<string.h>
int long_pal(char str[],int len){
    int start=1,end=0;
    for(int i=0;i<len;i++){
        int left=i,right=i;
        while(left>0 && right<len && left[left]==str[right]){
            start=left;
            end=right;
        }left--;
        right++;
    }
    for(int i=start;i<start+end;i++){
        printf("%c",str[i]);
    }
}
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    int len=strlen(str)-1;
    if(str[len]=='\n')str[len]='\0';
    long_pal(str,len);
    return 0;
}