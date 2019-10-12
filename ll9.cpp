// recursive reversal of linked list
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

Node* reverselist(Node *node, Node **head)
{
    if(!node)
        return NULL;
    if(!node->next)
    {
        *head = node;
        return node;
    }
    Node *node1 = reverselist(node->next, head);
    node1->next = node;
    node->next = NULL;
    return node;
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