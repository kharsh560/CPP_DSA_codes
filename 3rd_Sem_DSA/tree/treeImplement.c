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

int main()
{
    struct node *root = createNode(5);
    struct node *p1 = createNode(2);
    struct node *p2 = createNode(7);

    root->leftPtr = p1;
    root->rightPtr = p2;
    return 0;
}