#include <stdio.h>

int main() {
    printf("Aryan Sharma\n");
    int n = 1, count = 1;
    
    while (count <= 10) {
        for (int i = 1; i <= n; i++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
        n++;
    }
    
    return 0;
}
