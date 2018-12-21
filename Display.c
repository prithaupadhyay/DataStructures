
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head;

void push(int new_element)
{
    struct Node* newNode;
    newNode=(struct Node*) malloc(sizeof(struct Node));

    if(newNode==NULL)
    {
        printf("unable to allocate memory");
    }
    else
    {
    newNode->data = new_element;
    newNode->next= head;
    head = new_element;
    printf("Inserted successfully \n");
    }
}

void display()
{
    struct Node *temp;
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("Data = %d\n", temp->data);
            printf("after");
            temp=temp->next;
        }
    }
}

int main()
{
    push(7);
    push(5);
    push(6);
    display();
    return 0;

}