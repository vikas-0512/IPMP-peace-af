iterative_approach
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node *current=head,*previous=NULL, *forward;
        while(current!=NULL)
        {
            forward=current->next;
            current->next=previous;
            previous=current;
            current=forward;
        }
        return previous;
    }
    
};
//recursive approach
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(!head || !head->next)
          return head;
        else
        {
            struct Node* newhead=reverseList(head->next);
            head->next->next=head;
            head->next=NULL;
            return newhead;
        }
       
    }
    
};
