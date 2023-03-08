//WAP to print the sum of all numbers that are divisible by 5 between 1 to 1000.
#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 1; i <= 1000; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }

    printf("The sum of all numbers that are divisible by 5 between 1 and 1000 is %d.\n", sum);

    return 0;
}
