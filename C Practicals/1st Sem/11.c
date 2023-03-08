#include <stdio.h>

int main() {
    printf("Aryan Sharma\n");
    int arr[10], i, j, temp, num, found = 0;

    // Getting array elements from user
    printf("Enter 10 integer elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array in ascending order
    for (i = 0; i < 10; i++) {
        for (j = i+1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Getting the number to search
    printf("Enter a number to search: ");
    scanf("%d", &num);

    // Searching for the number in the array
    for (i = 0; i < 10; i++) {
        if (arr[i] == num) {
            printf("%d found at index %d.\n", num, i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("%d not found in the array.\n", num);
    }

    // Displaying the array in ascending order
    printf("The array in ascending order is:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
