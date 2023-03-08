//WAP to print all the numbers having 3 at its units place from the array.
#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print all the numbers with 3 at the units place
    printf("Numbers with 3 at the units place: ");
    for(i=0; i<n; i++) {
        if(arr[i] % 10 == 3) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
