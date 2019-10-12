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
void middle(Node *head, int *n, Node **mid)
{
    if(head == NULL)
    {
        *n = (*n + 1)/2;
        return;
    }

    *n = *n +  1;
    middle(head->next, n , mid);
    *n = *n -1;

    if(*n == 0)
        *mid = head;
}

int main()
{
    Node *head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    //push(&head,8);

    Node *mid = NULL; int n =0;
    middle(head, &n, &mid);
    cout<<mid->data<<'\n';
    return 0;
}