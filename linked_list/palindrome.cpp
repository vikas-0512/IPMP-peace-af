class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        stack <int> s;
        struct Node *p=head;
        while(p!=NULL)
        {
            s.push(p->data);
            p=p->next;
        }
        p=head;
        while(p!=NULL)
        {
            if(p->data!=s.top())
            return false;
           s.pop();
           p=p->next;
        }
          return true;
    }
};
class Solution{
  public:
    struct Node *reverse(struct Node *head)
    {
        if(!head || !head->next)
          return head;
        else
        {
            struct Node *newhead=reverse(head->next);
            head->next->next=head;
            head->next=NULL;
            return newhead;
        }
    }
    bool isPalindrome(Node *head)
    {
        struct Node *ori=NULL,*end;
        struct Node *rev,*p=head;
        while(p!=NULL)
        { 
            struct Node *temp=new Node(p->data);
            if(ori==NULL)
            {
                ori=temp;
                end=temp;
            }
            else
            {
                end->next=temp;
                end=end->next;
            }
            p=p->next;
        }
        rev=reverse(head);
        while(ori || rev)
        {
            if(ori->data != rev->data)
              return false;
            ori=ori->next;
            rev=rev->next;
            
        }
        return true;
    }
};
