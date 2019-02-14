#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void insertAtBegining(struct node** headRef, int newData);
void insertAtEnd(struct node** headRef, int newData);
void printList(struct node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<' ';
        node = node->next;
    }
    cout<<' ';
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n, ch, tmp;
        struct node* head = NULL;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp>>ch;
            if(ch) insertAtEnd(&head, tmp);
            else insertAtBegining(&head, tmp);
        }
        printList(head);
    }
    return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the linked list node is as
struct node
{
    int data;
    struct node *next;
};
*/
// function inserts the data in front of the list
void insertAtBegining(struct node** headRef, int newData)
{
    struct node *a=(struct node*)malloc(sizeof(struct node));
    a->data=newData;
    a->next=NULL;
    if(*headRef==NULL)
    {
        (*headRef)=a;
    }
    else{
        a->next=(*headRef);
        (*headRef)=a;
    }
}
// function appends the data at the end of the list
void insertAtEnd(struct node** headRef, int newData)
{
   struct node *a=(struct node*)malloc(sizeof(struct node));
        a->data=newData;
        a->next=NULL;
        
        if(*headRef==NULL){
        (*headRef)=a;
        }
        else{
        struct node* temp=(*headRef);
        while(temp->next!=NULL){
            temp=temp->next;
        }
        
        
        temp->next=a;
        }   
}