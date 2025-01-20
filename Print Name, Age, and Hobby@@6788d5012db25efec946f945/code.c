#include <stdio.h>

int main() {
    int num;
    char name[100],pation[100];
    scanf("%s %d",name,&num);
    scanf("%s",pation);
    printf("Name: %s\nAge: %d\nHobby: %s",name,num,pation);
    return 0;
}