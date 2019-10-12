// find length of linked list 
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void push(Node **head, int data)
{
    struct Node* new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}
// iterative
/*
void len(Node *head)
{
    int count =0;
    Node *current = head;
    while(current != NULL)
    {
        count++;
        current = current->next;

    }
    cout<<"The length is = "<<count<<'\n';
}
*/


// recursive
int len(Node *head)
{
    if(head == NULL)
        return 0;

    return 1 + len(head->next);
}

int main()
{
    struct Node *head = NULL;
    push(&head,2);
    push(&head,6);
    push(&head,7);

    int l = len(head);
    cout<<"The length is "<<l<<'\n';
    return 0;
}