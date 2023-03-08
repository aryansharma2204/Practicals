//WAP to print the sum of all numbers divisible by 7 from an array.
#include <stdio.h>

int main() {
    int arr[100], n, i, sum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the sum of all numbers divisible by 7
    sum = 0;
    for(i=0; i<n; i++) {
        if(arr[i] % 7 == 0) {
            sum += arr[i];
        }
    }

    // Print the sum
    printf("The sum of all numbers divisible by 7 is: %d", sum);

    return 0;
}
