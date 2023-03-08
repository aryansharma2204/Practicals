#include <stdio.h>

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Swapped values inside the function: x = %d, y = %d\n", x, y);
}

int main() {
    printf("Aryan Sharma\n");
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
