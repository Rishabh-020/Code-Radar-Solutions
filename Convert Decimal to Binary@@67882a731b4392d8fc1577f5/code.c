#include <stdio.h>
int main() {
    int n,binary[32],index=0;
    scanf("%d",&n);
    if(n==0){
        printf("%d",0);
    }
    while(n>0){
        binary[index]=n%2;
        n=n/2;
        index++;
    }
    for(int i=index-1;i>=0;i--){
        printf("%d",binary[i]);
    }  
    return 0;
}