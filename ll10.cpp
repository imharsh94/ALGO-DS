// iterative reversal of linked list
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void push(Node **head, int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = *head;
    *head = node;
}

void reverselist(Node *node,Node **head)
{
    Node *current = node;
    Node *next = NULL,*prev = NULL;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

int main()
{
    Node *head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);

    //printList(head);
    cout<<'\n';
    //removeFirst(&head);
    //printList(head);
     reverselist(head,&head);
    for(Node *temp = head ; temp != NULL ; temp = temp->next)
        cout<<temp->data<<" ";
    return 0;
}