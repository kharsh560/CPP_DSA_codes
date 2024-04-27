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

struct node *search(struct node *rootNode, int Num)
{
    if (rootNode == NULL)
    {
        return NULL;
    }
    if (rootNode->data == Num)
    {
        return rootNode;
    }
    else if (rootNode->data > Num)
    {
        return search(rootNode->leftPtr, Num);
    }
    else
    {
        return search(rootNode->rightPtr, Num);
    }
}

int main()
{
    struct node *root = createNode(4);
    struct node *p1 = createNode(2);
    struct node *p2 = createNode(6);
    root->leftPtr = p1;
    root->rightPtr = p2;
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(3);
    p1->leftPtr = p3;
    p1->rightPtr = p4;
    // Finally The tree looks like this:
    //      4
    //     / \
    //    2   6
    //   / \
    //  1   3

    // Traversals in Binary tree
    // preOrderTraversal(root);
    // postOrderTraversal(root);
    inOrderTraversal(root);
    printf("\n");
    struct node *foundPtr = search(root, 3);
    if (foundPtr == NULL)
    {
        printf("Number not found\n");
    }
    else
    {
        printf("%d\n", foundPtr->data);
    }
    return 0;
}