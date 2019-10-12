// delete last node 
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


Node* rem(Node *head)
{
    if(head == NULL)
        return NULL;
    if(head->next == NULL)
        return NULL;

    Node *s_last = head;
    while(s_last->next->next != NULL)
        s_last = s_last->next;
    
    delete s_last->next;
    s_last->next = NULL;

    return head;
}

int main()
{
    Node *head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);

   // printList(head);
    cout<<'\n';
    
    head = rem(head);
    for(Node *temp = head ; temp != NULL ; temp = temp->next)
        cout<<temp->data<<" ";
    return 0;
}