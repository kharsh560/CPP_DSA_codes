#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int rollNumber;
    char name[50];
    float GPA;
    struct Student *next;
};

void insertAtPosition(struct Student **head, int position, struct Student newStudent)
{
    struct Student *newNode = (struct Student *)malloc(sizeof(struct Student));
    newNode->rollNumber = newStudent.rollNumber;
    strcpy(newNode->name, newStudent.name);
    newNode->GPA = newStudent.GPA;

    if (position == 1 || *head == NULL)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        struct Student *temp = *head;
        for (int i = 1; i < position - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            printf("Invalid position, insertion not possible.\n");
        }
        else
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

void printList(struct Student *head)
{
    while (head != NULL)
    {
        printf("Roll Number: %d, Name: %s, GPA: %.2f\n", head->rollNumber, head->name, head->GPA);
        head = head->next;
    }
}

int main()
{
    struct Student *head = NULL;

    struct Student student1 = {101, "John", 3.5, NULL};
    struct Student student2 = {102, "Alice", 3.8, NULL};
    struct Student student3 = {103, "Bob", 3.2, NULL};

    head = &student1;
    student1.next = &student2;
    student2.next = &student3;

    printf("Initial Linked List:\n");
    printList(head);

    struct Student newStudent = {104, "Eva", 3.7, NULL};
    int positionToInsert = 2;
    insertAtPosition(&head, positionToInsert, newStudent);

    printf("\nLinked List after Insertion:\n");
    printList(head);

    return 0;
}
