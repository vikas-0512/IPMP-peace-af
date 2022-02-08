//using set
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
       unordered_set<struct Node *> s;
       while(head!=NULL)
       {
           if(s.find(head)!=s.end())
             return true;
           s.insert(head);
           head=head->next;
    }
    return false;
    }
};
//floyed algorithm
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head->next==NULL)
        return false;
        struct Node *fast=head->next,*slow=head;
        while(fast && fast->next)
        {
            if(slow==fast)
             return true;
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;
    }
};
