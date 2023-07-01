//write a program to implement recursive algorithms for performing searching and insertion on binary search tree
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
    } else if (data <= root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

Node* search(Node* root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    } else if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    printf("Aryan Sharma\n");
    Node* root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Inorder traversal of the BST: ");
    inorderTraversal(root);
    printf("\n");

    int searchData = 40;
    Node* searchResult = search(root, searchData);
    if (searchResult != NULL) {
        printf("%d found in the BST.\n", searchData);
    } else {
        printf("%d not found in the BST.\n", searchData);
    }

    searchData = 90;
    searchResult = search(root, searchData);
    if (searchResult != NULL) {
        printf("%d found in the BST.\n", searchData);
    } else {
        printf("%d not found in the BST.\n", searchData);
    }

    return 0;
}
