#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    if(num==1||num==3||num==5||num==7||num==8||num==10||num==12){
        printf("%d",31);
    }else if(num==2){
        printf("%d",28);
    }else if(num==4||num==6||num==9||num==11){
        printf("%d",30);
    }else{
        printf("Invalid month");
    }
    return 0;
}