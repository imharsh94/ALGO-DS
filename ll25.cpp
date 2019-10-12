// swap 2 nodes without swapping data
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

void swap(Node **head, int x, int y)
{
    if(x == y)
        return ;
    Node *prevX = NULL , *currX = *head;

    while(currX && currX->data != x)
    {
        prevX = currX;
        currX = currX->next;
    }

    Node *prevY = NULL, *currY = *head;
    while(currY && currY->data != y)
    {
        prevY = currY;
        currY = currY->next;
    }

    if(currX == NULL || currY == NULL)
        return;

    if(prevX != NULL)
        prevX->next = currY;
    else
    {
        *head = currY;
    }

    if(prevY != NULL)
        prevY->next = currX;
    else
        *head = currX;

    Node *temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
    
}

void printList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    push(&head,15);
    push(&head,47);
    push(&head,35);
    push(&head,48);
    push(&head,11);

    printList(head);
    swap(&head, 48, 15);
    printList(head);
    return 0;
}