#include <stdio.h>
#include<ctype.h>

int main() {
    char si;
    scanf("%c",&si);
    if(si=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U'){
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