//WAP to enter elements into an array and print the greatest number.
#include <stdio.h>

int main() {
    int arr[100], n, i, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum element in the array
    max = arr[0];
    for(i=1; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Print the maximum element
    printf("The greatest number is: %d", max);

    return 0;
}

