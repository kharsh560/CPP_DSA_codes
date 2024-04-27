#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prevLink;
    int data;
    struct node *link;
};

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->prevLink = NULL;
    head->data = 45;
    head->link = NULL;

    struct node *secondNode = (struct node *)malloc(sizeof(struct node));
    secondNode->prevLink = head;
    secondNode->data = 69;
    secondNode->link = NULL;
    head->link = secondNode;

    struct node *thirdNode = (struct node *)malloc(sizeof(struct node));
    thirdNode->prevLink = secondNode;
    thirdNode->data = 203;
    secondNode->link = NULL;
    secondNode->link = thirdNode;

    printf("The linked list is:- \n");
    printf("%d | %d -> %d | %d -> %d | %d\n", head->data, head->link, secondNode->data, secondNode->link, thirdNode->data, thirdNode->link);

    printf("address of head: %d | address of secondNode: %d | address of thirdNode: %d\n", head, secondNode, thirdNode);

    printf("\n");
    // printf("%d\n", head->data);
    return 0;
}