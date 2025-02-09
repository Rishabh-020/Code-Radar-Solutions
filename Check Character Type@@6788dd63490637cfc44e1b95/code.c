#include <stdio.h>
#include<ctype.h>

int main() {
    char si;
    scanf("%c",&si);
    if(si=='a'||si=='e'||si=='i'||si=='o'||si=='u'||
       si=='A'||si=='E'||si=='I'||si=='O'||si=='U'){
        printf("Vowel");
    }else if (isalpha(si)) {
        printf("Consonant");
    }else if(isdigit(si)){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}