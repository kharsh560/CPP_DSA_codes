#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct College
{
    int collegeID;
    char name[50];
    float rating;
    struct College *next;
};

void insertAtFront(struct College **head, struct College newCollege)
{
    struct College *newNode = (struct College *)malloc(sizeof(struct College));
    newNode->collegeID = newCollege.collegeID;
    strcpy(newNode->name, newCollege.name);
    newNode->rating = newCollege.rating;

    if (*head == NULL)
    {
        newNode->next = newNode;
        *head = newNode;
    }
    else
    {
        newNode->next = (*head)->next;
        (*head)->next = newNode;
    }
}

void deleteAtEnd(struct College **head)
{
    if (*head == NULL)
    {
        return;
    }

    struct College *currentNode = *head;
    struct College *previousNode = NULL;

    while (currentNode->next != *head)
    {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }

    if (previousNode != NULL)
    {
        previousNode->next = *head;
    }
    else
    {
        *head = NULL;
    }

    free(currentNode);
}

void printList(struct College *head)
{
    if (head == NULL)
    {
        return;
    }

    struct College *currentNode = head;

    do
    {
        printf("College ID: %d, Name: %s, Rating: %.2f\n", currentNode->collegeID, currentNode->name, currentNode->rating);
        currentNode = currentNode->next;
    } while (currentNode != head);
}

int main()
{
    struct College *head = NULL;

    struct College college1 = {1, "ABC College", 4.5, NULL};
    struct College college2 = {2, "XYZ College", 4.0, NULL};
    struct College college3 = {3, "PQR College", 4.2, NULL};

    insertAtFront(&head, college1);
    insertAtFront(&head, college2);
    insertAtFront(&head, college3);

    printf("Circular Linked List after Insertion at Front:\n");
    printList(head);

    deleteAtEnd(&head);

    printf("\nCircular Linked List after Deletion at End:\n");
    printList(head);

    return 0;
}
