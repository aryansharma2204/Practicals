//WAP to implement Polynomial addition operation using linked list.
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int coefficient;
    int exponent;
    struct Node* next;
} Node;

Node* createNode(int coefficient, int exponent) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;
    return newNode;
}

void insertTerm(Node** poly, int coefficient, int exponent) {
    Node* newNode = createNode(coefficient, exponent);

    if (*poly == NULL) {
        *poly = newNode;
    } else {
        Node* curr = *poly;
        while (curr->next != NULL)
            curr = curr->next;
        curr->next = newNode;
    }
}

void displayPolynomial(Node* poly) {
    if (poly == NULL) {
        printf("Polynomial is empty.\n");
        return;
    }

    Node* curr = poly;
    while (curr != NULL) {
        printf("(%dx^%d)", curr->coefficient, curr->exponent);
        if (curr->next != NULL)
            printf(" + ");
        curr = curr->next;
    }
    printf("\n");
}

Node* addPolynomials(Node* poly1, Node* poly2) {
    if (poly1 == NULL)
        return poly2;
    if (poly2 == NULL)
        return poly1;

    Node* result = NULL;
    Node* curr1 = poly1;
    Node* curr2 = poly2;

    while (curr1 != NULL && curr2 != NULL) {
        if (curr1->exponent > curr2->exponent) {
            insertTerm(&result, curr1->coefficient, curr1->exponent);
            curr1 = curr1->next;
        } else if (curr1->exponent < curr2->exponent) {
            insertTerm(&result, curr2->coefficient, curr2->exponent);
            curr2 = curr2->next;
        } else {
            int sumCoefficients = curr1->coefficient + curr2->coefficient;
            if (sumCoefficients != 0)
                insertTerm(&result, sumCoefficients, curr1->exponent);
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
    }

    while (curr1 != NULL) {
        insertTerm(&result, curr1->coefficient, curr1->exponent);
        curr1 = curr1->next;
    }

    while (curr2 != NULL) {
        insertTerm(&result, curr2->coefficient, curr2->exponent);
        curr2 = curr2->next;
    }

    return result;
}

void freePolynomial(Node* poly) {
    Node* temp;
    while (poly != NULL) {
        temp = poly;
        poly = poly->next;
        free(temp);
    }
}

int main() {
    printf("Aryan Sharma\n");
    Node* poly1 = NULL;
    Node* poly2 = NULL;
    Node* sum = NULL;

    // Polynomial 1: 2x^3 + 4x^2 + 3x^1
    insertTerm(&poly1, 2, 3);
    insertTerm(&poly1, 4, 2);
    insertTerm(&poly1, 3, 1);

    // Polynomial 2: 5x^2 + 2x^1 + 1
    insertTerm(&poly2, 5, 2);
    insertTerm(&poly2, 2, 1);
    insertTerm(&poly2, 1, 0);

    printf("Polynomial 1: ");
    displayPolynomial(poly1);

    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    sum = addPolynomials(poly1, poly2);

    printf("Sum: ");
    displayPolynomial(sum);

    // Free memory
    freePolynomial(poly1);
    freePolynomial(poly2);
    freePolynomial(sum);

    return 0;
}

