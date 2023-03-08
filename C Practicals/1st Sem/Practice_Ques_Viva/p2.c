//WAP to enter elements into an array and print the sum of even numbers
#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of even numbers in the array
    for(i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("The sum of even numbers in the array is: %d", sum);

    return 0;
}
