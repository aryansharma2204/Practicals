/*WAP to print the following series:-
A
AB
ABC
ABCD
*/
#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A';

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", ch++);
        }
        ch = 'A';
        printf("\n");
    }

    return 0;
}

