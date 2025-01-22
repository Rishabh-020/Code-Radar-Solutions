#include <stdio.h>


int main() {
    char st;
    scanf("%c",&st);
    if(st=='A'){
        printf("Excellent");
    }else if (st=='B'){
        printf("Good");
    }else if(st=='C'){
        printf("Average");
    }else if(st=='D'){
        printf("Below Average");
    }else if(st=='F'){
        printf("Fail");
    }else{
        printf("Invalid grade");
    }
    return 0;
}