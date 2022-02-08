void reverse(struct Node* head)
{
    if(head==NULL)
     return;
    else
     reverse(head->next);
     cout<<head->data<<endl;
}
//using stack
void reverse(struct Node *head)
{
stack <int> s;
struct Node *p=head;
while(p!=NULL)
{
    s.push(p->data);
    p=p->next;
}
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;
}
