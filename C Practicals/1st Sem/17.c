#include <stdio.h>

int isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    printf("Aryan Sharma\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPerfectNumber(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}
