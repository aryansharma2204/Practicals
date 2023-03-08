//WAP to enter elements into an array by the user and print every alternate number from them.
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i;

    printf("Enter the number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements from the array:\n");
    for (i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
