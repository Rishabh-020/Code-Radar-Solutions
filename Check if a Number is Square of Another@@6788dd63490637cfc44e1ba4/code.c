#include <stdio.h>

int main() {
    int a,b,pro=0;
    scanf("%d %d",&a,&b);
    pro=b*b;
    if(pro==a){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}