int getNthFromLast(struct Node *head, int n)
{
    struct Node *p=head;
    int length=0;
    while(p!=NULL)
    {
        p=p->next;
        length++;
    }
    if(n>length)
    return -1;
    else
    {
        p=head;
        for(int i=0;i<(length-n);i++)
        {
            p=p->next;
        }
        return p->data;
    }
}
//using double pointers
int getNthFromLast(struct Node *head, int n)
{
    struct Node *p=head,*q=head;
    for(int i=0;i<n;i++)
    {
        if(p==NULL)
          return -1;
        p=p->next;
    }
    while(p!=NULL)
    {
        q=q->next;
        p=p->next;
    }
    return q->data;
}
