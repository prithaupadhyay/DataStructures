#include<stdio.h>
#include<stdlib.h>
/* Link list node */
struct node
{
    int data;
    struct node* next;
}*head;
int count(struct node* head, int search_for);
  void insert()
{
    int n,i,value;
    struct node *temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf(" ");
}
/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */
    int t,k,n,value;
     /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
     scanf("%d",&t);
     while(t--)
     {
     insert();
     scanf("%d",&k);
     value = count(head, k);
     printf("%d",value);
     }
     return(0);
}


int count(struct node* head, int search_for)
{
    struct node* temp=head;
    int count=0;
    
    while(temp!=NULL)
    {
        if((temp->data)==search_for)
        {
            count++;
        }
        temp=temp->next;
    }
    return count;
}