#include <stdio.h>

int main() {
    printf("Aryan Sharma\n");
    int num, flag = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // check if num is divisible by any number between 2 and num-1
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }
    
    // if flag is still 0, num is prime
    if (flag == 0) {
        printf("%d is a prime number.", num);
    }
    else {
        printf("%d is not a prime number.", num);
    }
    
    return 0;
}
