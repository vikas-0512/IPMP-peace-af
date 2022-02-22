#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

// task is to complete this function
struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}

// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// task is to complete this function
// function should return head to the list after making 
// necessary arrangements
bool vowel(char c)
{
    if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u')
    return true;
    else
    return false;
}
struct Node* arrange(Node *head)
{
  Node *p=head,*q=head,*ptr;
  while(p && vowel(p->data))
  {
      q=p;
      p=p->next;
  }
  ptr=q;
  int flag=0;
  if(p==head)
  {
      while(p && !vowel(p->data))
      {
          q=p;
          p=p->next;
      }
      if(p)
      {
      q->next=p->next;
      p->next=head;
      head=p;
      ptr=head;
      flag=1;
      }
  }
  {
      p=ptr->next;
      q=ptr;
      while(p)
      {
          if(vowel(p->data))
          {
            q->next=p->next;
            p->next=ptr->next;
            ptr->next=p;
            ptr=ptr->next;
            p=q->next;
          }
         else
         {
          p=p->next;
          q=q->next;
         }
      }
  }
  return head;
}
