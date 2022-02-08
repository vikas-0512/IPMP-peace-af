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
