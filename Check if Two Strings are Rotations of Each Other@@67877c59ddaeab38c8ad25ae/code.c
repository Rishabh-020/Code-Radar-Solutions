#include <stdio.h>
#include <string.h>

// Function to check if str2 is a rotation of str1
int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1), len2 = strlen(str2);

    if (len1 != len2) return 0;  // Lengths must be the same

    // Create a new string by concatenating str1 with itself
    char temp[2000];  
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[1000], str2[1000];
    
    fgets(str1, sizeof(str1), stdin);
    if (str1[strlen(str1) - 1] == '\n') str1[strlen(str1) - 1] = '\0';

    fgets(str2, sizeof(str2), stdin);
    if (str2[strlen(str2) - 1] == '\n') str2[strlen(str2) - 1] = '\0';

    if (isRotation(str1, str2))
        printf("Yesd\n");
    else
        printf("No\n");

    return 0;
}
