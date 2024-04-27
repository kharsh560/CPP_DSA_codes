#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// #include <stdbool.h>

struct node
{
    struct node *leftPtr;
    int data;
    struct node *rightPtr;
};
struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->leftPtr = NULL;
    n->data = data;
    n->rightPtr = NULL;
    return n;
}
void preOrderTraversal(struct node *rootNode)
{
    if (rootNode != NULL)
    {
        printf("%d ", rootNode->data);
        preOrderTraversal(rootNode->leftPtr);
        preOrderTraversal(rootNode->rightPtr);
    }
}

void postOrderTraversal(struct node *rootNode)
{
    if (rootNode != NULL)
    {
        postOrderTraversal(rootNode->leftPtr);
        postOrderTraversal(rootNode->rightPtr);
        printf("%d ", rootNode->data);
    }
}

void inOrderTraversal(struct node *rootNode)
{
    if (rootNode != NULL)
    {
        inOrderTraversal(rootNode->leftPtr);
        printf("%d ", rootNode->data);
        inOrderTraversal(rootNode->rightPtr);
    }
}

//      4
//     / \
//    2   6
//   / \
//  1   3

int isBST(struct node *rootNode, int minVal, int maxVal)
{
    if (rootNode == NULL)
    {
        return 1;
    }
    if (rootNode->data >= maxVal || rootNode->data <= minVal)
    {
        return 0;
    }
    return isBST(rootNode->leftPtr, minVal, rootNode->data) && isBST(rootNode->rightPtr, rootNode->data, maxVal);
}

int main()
{
    struct node *root = createNode(4);
    struct node *p1 = createNode(2);
    struct node *p2 = createNode(5);
    root->leftPtr = p1;
    root->rightPtr = p2;
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(3);
    p1->leftPtr = p3;
    p1->rightPtr = p4;
    // Finally The tree looks like this:
    //      4
    //     / \
    //    2   5
    //   / \
    //  1   3

    // Traversals in Binary tree
    // preOrderTraversal(root);
    // postOrderTraversal(root);
    inOrderTraversal(root);
    printf("\n");
    printf("%d\n", isBST(root, -2147483648, 2147483647));
    return 0;
}