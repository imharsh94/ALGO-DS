// middle of a linked list
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


void middle(Node *node)
{
    Node *slow = node, *fast = node;

    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout<<"The middle element is "<<slow->data<<'\n';
}

int main()
{
    Node *head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,8);
    middle(head);

    return 0;
}