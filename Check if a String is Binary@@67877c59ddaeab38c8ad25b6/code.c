#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    // int num,count=1,N=0,len=0;
    // scanf("%d",&num);
    // while(num>0){
    //     N=num%10;
    //     if(isalpha(N)){
    //         printf("No");
    //         return 0;
    //     }
    //     if(N==1 || N==0){
    //         len++;
    //     }else{
    //         count=0;
    //     }
    //     num/=10;
    // }
    // if(count==0){
    //     printf("No");
    // }else{
    //     printf("Yes");
    // }
    char str[1000];
    int count=0;
    fgets(str,1000,stdin);
    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1]='\0';
    }
    for(int i=0;i<strlen(str)-1;i++){
        if(isdigit(str[i])){
            if(str[i]==1 || str[i]==0){
                count=0;
            }
            else{
                count=1;
            }
        }else{
            count=1;
        }
    }
    if(count==1){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}