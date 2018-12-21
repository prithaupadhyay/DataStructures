
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head;

void append(int new_element)
{
    struct Node* newNode;
    newNode=(struct Node*) malloc(sizeof(struct Node));
    struct Node *last = head;

    newNode->data = new_element;
    newNode->next= NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=newNode;
    printf("Inserted successfully \n");
    }
}

int main()
{
    int data;
    printf("Enter data to be inserted in the beginning ");
    scanf("%d",&data);
    append(data);
    append(5);
    append(6);
    return 0;

}