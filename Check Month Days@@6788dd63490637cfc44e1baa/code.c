#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    switch(num){
        case 1,3,5,7,8,10,12:
        printf(31);
        case 2:
        printf(28);
        case 4,6,9,11:
        printf(30);
    }
    return 0;
}