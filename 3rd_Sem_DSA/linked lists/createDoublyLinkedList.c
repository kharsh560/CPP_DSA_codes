#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int employeeID;
    char name[50];
    float salary;
    struct Employee *prev;
    struct Employee *next;
};

void insertAtFront(struct Employee **head, struct Employee newEmployee)
{
    struct Employee *newNode = (struct Employee *)malloc(sizeof(struct Employee));
    newNode->employeeID = newEmployee.employeeID;
    strcpy(newNode->name, newEmployee.name);
    newNode->salary = newEmployee.salary;

    newNode->next = *head;
    newNode->prev = NULL;

    if (*head != NULL)
    {
        (*head)->prev = newNode;
    }

    *head = newNode;
}

void deleteAtEnd(struct Employee **head)
{
    if (*head == NULL)
    {
        return;
    }

    struct Employee *lastNode = *head;
    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }

    if (lastNode->prev != NULL)
    {
        lastNode->prev->next = NULL;
    }
    else
    {
        *head = NULL;
    }

    free(lastNode);
}

void printList(struct Employee *head)
{
    while (head != NULL)
    {
        printf("Employee ID: %d, Name: %s, Salary: %.2f\n", head->employeeID, head->name, head->salary);
        head = head->next;
    }
}

int main()
{
    struct Employee *head = NULL;

    struct Employee employee1 = {1, "John", 50000.0, NULL, NULL};
    struct Employee employee2 = {2, "Alice", 60000.0, NULL, NULL};
    struct Employee employee3 = {3, "Bob", 55000.0, NULL, NULL};

    insertAtFront(&head, employee1);
    insertAtFront(&head, employee2);
    insertAtFront(&head, employee3);

    printf("Doubly Linked List after Insertion at Front:\n");
    printList(head);

    deleteAtEnd(&head);

    printf("\nDoubly Linked List after Deletion at End:\n");
    printList(head);

    return 0;
}
