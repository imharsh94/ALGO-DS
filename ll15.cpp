// detect loop in linked list unordered set
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void push(Node **head,int data)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = (*head);
    (*head) = new_node;
}

bool  detectLoop(Node *head)
{
    unordered_set< Node* > s;
    while(head != NULL)
    {
        if(s.find(head) == s.end())
            s.insert(head);
        else
            return true;
        head= head->next;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
   
   //head->next->next->next->next = head->next->next;

   if(detectLoop(head))
    cout<<"Loop detected\n";
   else
   {
        cout<<"No loop found\n";
   }
   

    return 0;
}