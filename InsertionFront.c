
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

int main()
{
    int data;
    printf("Enter data to be inserted in the beginning ");
    scanf("%d",&data);
    push(data);

    push(5);
    push(6);
    return 0;

}