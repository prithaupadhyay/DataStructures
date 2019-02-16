int detectloop(struct node *head){
    if(head->next==NULL || head->next->next==NULL)
    {
        return 0;
    }
    struct node* start=head;
    struct node* end=head->next;
    
    while(end!=NULL)
    {
        if(end==start)
        {
            return 1;
        }
        if(end->next==NULL || end->next->next==NULL)
        {
            return 0;
        }
        start=start->next;
        end=end->next->next;
    }
   
    return 0;
}