#include <stdio.h>

int main() {
    int a,b,pro=0;
    scanf("%d %d",&a,&b);
    pro=a*a;
    if(pro==b){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}