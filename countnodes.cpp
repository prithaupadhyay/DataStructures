#include<stdio.h>
#include<stdlib.h>
 
/* Link list node */
struct node
{
    int data;
    struct node* next;
};

void push(struct node** head_ref, int new_data)
{
   
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
 
    
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 
/* Counts no. of nodes in linked list */
int getCount(struct node* head);
int main()
{
    int T,i,n,l;
    
    scanf("%d",&T);
    
    while(T--){
    struct node *head = NULL;
        
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&l);
            push(&head,l);
        }
 
    /* Check the count function */
    printf("%d",getCount(head));
    }
    return 0;
}


int getCount(struct node* head){
    int count=0;
    struct node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
