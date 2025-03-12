#include<stdio.h>
int main(){
    char str[1000];
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++){
        for(int j=i;str[j]!='\0';j++){
            if(strcmp(str[i],str[j])==0){
                printf("%c",str[i]);
                return 0;
            }
        }
    }
    printf("-");
    return 0;
}