#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

struct Element
{
    int row, col, value;
};

struct SparseMatrix
{
    int numRows, numCols, numElements;
    struct Element elements[MAX_ROWS * MAX_COLS];
};

void createSparseMatrix(struct SparseMatrix *matrix, int normalMatrix[MAX_ROWS][MAX_COLS], int numRows, int numCols)
{
    matrix->numRows = numRows;
    matrix->numCols = numCols;
    matrix->numElements = 0;

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            if (normalMatrix[i][j] != 0)
            {
                matrix->elements[matrix->numElements].row = i;
                matrix->elements[matrix->numElements].col = j;
                matrix->elements[matrix->numElements].value = normalMatrix[i][j];
                matrix->numElements++;
            }
        }
    }
}

void displaySparseMatrix(struct SparseMatrix *matrix)
{
    printf("Sparse Matrix:\n");
    printf("Row\tColumn\tValue\n");

    for (int i = 0; i < matrix->numElements; i++)
    {
        printf("%d\t%d\t%d\n", matrix->elements[i].row, matrix->elements[i].col, matrix->elements[i].value);
    }
}

int main()
{
    int normalMatrix[MAX_ROWS][MAX_COLS] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}};

    struct SparseMatrix sparseMatrix;
    createSparseMatrix(&sparseMatrix, normalMatrix, 4, 5);
    displaySparseMatrix(&sparseMatrix);

    return 0;
}

// DSA LAB 9

#include <stdio.h>
#include <stdlib.h>

// Node structure for the binary tree
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to perform an inorder traversal (left, root, right)
void inorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Function to perform a preorder traversal (root, left, right)
void preorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Function to perform a postorder traversal (left, right, root)
void postorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    // Creating a sample binary tree
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Perform tree traversals
    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");

    printf("Preorder Traversal: ");
    preorderTraversal(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}

// DSA_LAB_10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Automobile
{
    char type[50];
    char company[50];
    int yearOfMake;
};

struct Node
{
    struct Automobile data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(struct Automobile car)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = car;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node *insertNode(struct Node *root, struct Automobile car)
{
    if (root == NULL)
    {
        return createNode(car);
    }

    if (car.yearOfMake < root->data.yearOfMake)
    {
        root->left = insertNode(root->left, car);
    }
    else if (car.yearOfMake > root->data.yearOfMake)
    {
        root->right = insertNode(root->right, car);
    }

    return root;
}

struct Node *findMin(struct Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

struct Node *deleteNode(struct Node *root, int yearOfMake)
{
    if (root == NULL)
    {
        return root;
    }

    if (yearOfMake < root->data.yearOfMake)
    {
        root->left = deleteNode(root->left, yearOfMake);
    }
    else if (yearOfMake > root->data.yearOfMake)
    {
        root->right = deleteNode(root->right, yearOfMake);
    }
    else
    {
        if (root->left == NULL)
        {
            struct Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        struct Node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data.yearOfMake);
    }

    return root;
}

void inorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("Type: %s, Company: %s, Year: %d\n", root->data.type, root->data.company, root->data.yearOfMake);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        printf("Type: %s, Company: %s, Year: %d\n", root->data.type, root->data.company, root->data.yearOfMake);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(struct Node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("Type: %s, Company: %s, Year: %d\n", root->data.type, root->data.company, root->data.yearOfMake);
    }
}

void freeBST(struct Node *root)
{
    if (root != NULL)
    {
        freeBST(root->left);
        freeBST(root->right);
        free(root);
    }
}

int main()
{
    struct Node *root = NULL;

    struct Automobile car1 = {"Sedan", "Toyota", 2019};
    struct Automobile car2 = {"SUV", "Honda", 2020};
    struct Automobile car3 = {"Hatchback", "Ford", 2018};
    struct Automobile car4 = {"Coupe", "Chevrolet", 2021};

    root = insertNode(root, car1);
    root = insertNode(root, car2);
    root = insertNode(root, car3);
    root = insertNode(root, car4);

    printf("Inorder Traversal:\n");
    inorderTraversal(root);

    printf("\nPreorder Traversal:\n");
    preorderTraversal(root);

    printf("\nPostorder Traversal:\n");
    postorderTraversal(root);

    int yearToDelete = 2018;
    root = deleteNode(root, yearToDelete);

    printf("\nInorder Traversal after Deletion:\n");
    inorderTraversal(root);

    freeBST(root);

    return 0;
}
