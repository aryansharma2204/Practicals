#include <stdio.h>

void insert(int arr[], int size, int index, int element) {
    if(index > size || index < 0) {
        printf("Invalid index!\n");
        return;
    }
    for(int i=size-1; i>=index; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    printf("Element %d inserted at index %d.\n", element, index);
}

void delete(int arr[], int size, int index) {
    if(index >= size || index < 0) {
        printf("Invalid index!\n");
        return;
    }
    for(int i=index; i<size-1; i++) {
        arr[i] = arr[i+1];
    }
    printf("Element at index %d deleted.\n", index);
}

void traverse(int arr[], int size) {
    printf("The array is: ");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int size) {
    int temp;
    for(int i=0; i<size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    printf("Array reversed successfully.\n");
}

void merge(int arr1[], int size1, int arr2[], int size2) {
    int merged[size1+size2];
    int i=0, j=0, k=0;
    while(i<size1 && j<size2) {
        if(arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        }
        else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i < size1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    while(j < size2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    printf("Arrays merged successfully.\n");
    traverse(merged, size1+size2);
}

int main() {
    int size1, size2, choice, index, element;
    printf("Enter size of array 1: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of array 1: ");
    for(int i=0; i<size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of array 2: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements of array 2: ");
    for(int i=0; i<size2; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("1. Insert an element in an array.\n");
    printf("2. Delete an element from an array.\n");
    printf("3. Traverse the array.\n");
    printf("4. Reverse the array.\n");
    printf("5. Merge two arrays.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter index and element to be inserted: ");
            scanf("%d%d", &index, &element);
            insert(arr1, size1, index, element);
            traverse(arr1, size1);
            break;
        case 2:
        printf("Enter index of element to be deleted: ");
        scanf("%d", &index);
        delete(arr1, size1, index);
        traverse(arr1, size1);
        break;
        case 3:
            traverse(arr1, size1);
            break;
        case 4:
            reverse(arr1, size1);
            traverse(arr1, size1);
            break;
        case 5:
            merge(arr1, size1, arr2, size2);
            break;
        default:
            printf("Invalid choice!\n");
}    return 0;
}