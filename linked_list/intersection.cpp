Node* findIntersection(Node* head1, Node* head2)
{
    Node *newlist=NULL,*end;
  while(head1!=NULL && head2!=NULL)
  {
      if(head1->data< head2->data)
       head1=head1->next;
      else if(head1->data > head2->data)
       head2=head2->next;
      else if(head1->data == head2->data)
      {
          Node *temp=new Node(head1->data);
          if(newlist==NULL)
          {
              newlist=temp;
              end=temp;
          }
          else
          {
              end->next=temp;
              end=end->next;
          }
          head1=head1->next;
          head2=head2->next;
      }
  }
  return newlist;
}
