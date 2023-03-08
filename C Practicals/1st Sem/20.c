#include <stdio.h>

int main() {
    printf("Aryan Sharma\n");
    FILE *fp;   // Declare a file pointer
    char ch;    // Declare a variable to store each character in the file

    // Open the file for reading
    fp = fopen("test.txt", "r");

    // Check if the file was opened successfully
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Read each character from the file and print it to the console
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}
