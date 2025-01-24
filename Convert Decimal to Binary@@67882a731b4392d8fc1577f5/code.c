#include <stdio.h>


int main() {
    int num,binary[32],index=0;
    scanf("%d",&num);
    if(n==0){
        printf("0");
    }
    while(n>0){
        binary[index]=n/2;
        n=n/2;
        index++;
    }
    for(int i=0;i<=index;i++){
        printf("%d",binary[i]);
    }
    return 0;
}