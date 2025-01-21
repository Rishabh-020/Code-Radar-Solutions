#include <stdio.h>

int main() {
    int a,b,pro;
    scanf("%d %d",&a,&b);
    pro=a*a;
    if(pro==b){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}