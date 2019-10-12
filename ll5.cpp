// recursion reverse of linked list
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void reverseList(Node *head)
{
    if(head == NULL)
        return;
    
    reverseList(head->next);

    cout<<head->data<<" ";
}

void push(Node **head,int data)
{
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = (*head);
    (*head) = new_node;
}

int main()
{
    Node *head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);

    reverseList(head);
    return 0;
}