void removeTheLoop(Node *head)
{
    struct Node *start = head;
    struct Node *end = head;
    int f = 0;
    while(start && end && end->next)
    {
        start = start->next;
        end = end->next->next;
        if(start==end)
        {
            f = 1;
            break;
        }
    }
    if(f)
    {
        start = head;
        while(start!=end)
        {
            end = end->next;
            start = start->next;
        }
        while(start->next!=end)
            start = start->next;
        start->next = NULL;
    }
    return;
    
}
