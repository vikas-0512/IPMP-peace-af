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
