#include <stdio.h>

int main() {
    printf("Aryan Sharma\n");
    int num, max = 0;
    
    for (int i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }
    
    printf("The greatest number is %d", max);
    
    return 0;
}

