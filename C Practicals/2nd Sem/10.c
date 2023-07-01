//WAP to accept a matrix from user, find out matrix is sparse or not and convert into triplex matrix.
#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

typedef struct {
    int row;
    int col;
    int value;
} Triplet;

void acceptMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int isSparseMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0)
                count++;
        }
    }
    float sparsity = (float)count / (rows * cols);
    if (sparsity > 0.5) // If more than 50% of the elements are zero, consider it as a sparse matrix
        return 1;
    else
        return 0;
}

void convertToTriplet(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols, Triplet triplets[]) {
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                triplets[k].row = i;
                triplets[k].col = j;
                triplets[k].value = matrix[i][j];
                k++;
            }
        }
    }
}

void displayTripletMatrix(Triplet triplets[], int numTriplets) {
    printf("Triplet Matrix:\n");
    for (int i = 0; i < numTriplets; i++) {
        printf("%d %d %d\n", triplets[i].row, triplets[i].col, triplets[i].value);
    }
}

int main() {
    printf("Aryan Sharma\n");
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    acceptMatrix(matrix, rows, cols);

    if (isSparseMatrix(matrix, rows, cols)) {
        printf("The matrix is sparse.\n");

        Triplet triplets[rows * cols];
        convertToTriplet(matrix, rows, cols, triplets);
        int numTriplets = rows * cols - ((rows * cols) - (rows * cols) / 2); // Number of non-zero elements

        displayTripletMatrix(triplets, numTriplets);
    } else {
        printf("The matrix is not sparse.\n");
    }

    return 0;
}
