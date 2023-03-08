#include <stdio.h>

void fibonacci(int n, int a, int b) {
    if (n == 0) {
        return;
    }
    int c = a + b;
    printf("%d ", c);
    fibonacci(n - 1, b, c);
}

int main() {
    printf("Aryan Sharma\n");
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("0\n");
    }
    else if (n == 2) {
        printf("0 1\n");
    }
    else {
        printf("0 1 ");
        fibonacci(n - 2, 0, 1);
    }

    return 0;
}
