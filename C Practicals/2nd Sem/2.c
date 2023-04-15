#include <stdio.h>

int linear_search(int arr[], int size, int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int size, int key) {
    int low = 0, high = size-1, mid;
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int size, key, choice, index;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("1. Search using linear search.\n");
    printf("2. Search using binary search.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter the element to search: ");
            scanf("%d", &key);
            index = linear_search(arr, size, key);
            if(index == -1) {
                printf("Element not found.\n");
            }
            else {
                printf("Element found at index %d.\n", index);
            }
            break;
        case 2:
            printf("Enter the element to search: ");
            scanf("%d", &key);
            index = binary_search(arr, size, key);
            if(index == -1) {
                printf("Element not found.\n");
            }
            else {
                printf("Element found at index %d.\n", index);
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
