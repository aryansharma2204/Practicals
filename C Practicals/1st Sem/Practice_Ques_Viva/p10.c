/*Q.2. WAP to print the following series:-
1
12
123
*/
#include <stdio.h>

int main() {
    int n = 3; // number of rows in the series
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

