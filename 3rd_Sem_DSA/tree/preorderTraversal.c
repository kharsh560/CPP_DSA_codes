#include <stdio.h>
#include <stdlib.h>

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
    // Manual approach :-
    // printf("%d ", rootNode->data);
    // printf("%d ", rootNode->leftPtr->data);
    // printf("%d ", rootNode->leftPtr->leftPtr->data);
    // printf("%d ", rootNode->leftPtr->rightPtr->data);
    // printf("%d ", rootNode->rightPtr->data);

    // Very Very simple code using recursions

    if (rootNode != NULL)
    {
        printf("%d ", rootNode->data);
        preOrderTraversal(rootNode->leftPtr);
        preOrderTraversal(rootNode->rightPtr);
    }
}

void postOrderTraversal(struct node *rootNode)
{
    // Very Very simple code using recursions

    if (rootNode != NULL)
    {
        postOrderTraversal(rootNode->leftPtr);
        postOrderTraversal(rootNode->rightPtr);
        printf("%d ", rootNode->data);
    }
}

void inOrderTraversal(struct node *rootNode)
{
    // Very Very simple code using recursions

    if (rootNode != NULL)
    {
        inOrderTraversal(rootNode->leftPtr);
        printf("%d ", rootNode->data);
        inOrderTraversal(rootNode->rightPtr);
    }
}

int main()
{
    struct node *root = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(6);
    root->leftPtr = p1;
    root->rightPtr = p2;
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(2);
    p1->leftPtr = p3;
    p1->rightPtr = p4;
    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2

    // Traversals in Binary tree
    // preOrderTraversal(root);
    // postOrderTraversal(root);
    inOrderTraversal(root);
    return 0;
}