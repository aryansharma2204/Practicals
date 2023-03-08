//WAP to enter a string from the user and count the number of upper case and lower case character.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, upperCount = 0, lowerCount = 0, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            lowerCount++;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            upperCount++;
        }
    }

    printf("Number of lowercase characters: %d\n", lowerCount);
    printf("Number of uppercase characters: %d", upperCount);

    return 0;
}
