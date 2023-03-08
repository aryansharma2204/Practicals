#include <stdio.h>
#include <math.h>

int isArmstrong(int num);
int isPrime(int num);
int reverse(int num);

int main() {
    printf("Aryan Sharma\n");
    int choice, n, i, num;

    printf("Menu:\n");
    printf("1. Print Armstrong numbers between 1 and n.\n");
    printf("2. Display prime numbers between 1 and n.\n");
    printf("3. Find the reverse of a number.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Armstrong numbers between 1 and %d are: ", n);
            for (i = 1; i <= n; i++) {
                if (isArmstrong(i)) {
                    printf("%d ", i);
                }
            }
            printf("\n");
            break;

        case 2:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Prime numbers between 1 and %d are: ", n);
            for (i = 2; i <= n; i++) {
                if (isPrime(i)) {
                    printf("%d ", i);
                }
            }
            printf("\n");
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("The reverse of %d is %d.\n", num, reverse(num));
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}

int isArmstrong(int num) {
    int temp = num, sum = 0, rem;
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, 3);
        temp /= 10;
    }
    return (sum == num);
}

int isPrime(int num) {
    int i;
    if (num == 2) {
        return 1;
    }
    if (num < 2 || num % 2 == 0) {
        return 0;
    }
    for (i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}
