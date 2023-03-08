//WAP to enter a character from the user. If the character is in upper case then convert it into lower case and vice-versa.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // check if the entered character is an alphabet
    if (ch >= 'a' && ch <= 'z') {
        // convert lowercase to uppercase
        ch = ch - 'a' + 'A';
    }
    else if (ch >= 'A' && ch <= 'Z') {
        // convert uppercase to lowercase
        ch = ch - 'A' + 'a';
    }

    printf("The converted character is: %c\n", ch);

    return 0;
}
