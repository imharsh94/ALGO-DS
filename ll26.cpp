#include<bits/stdc++.h>
using namespace std;

// swapping nodes
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

void rev(Node **a, Node **b)
{
    Node *temp = *a;
    *a = *b;
    *b = temp;
}

void swap(Node **head, int x, int y)
{
    if(x == y)
        return;
    
    Node **a = NULL , **b = NULL;

    while(*head)
    {
        if((*head)->data == x)
        {
            a = head;
        }
        else if((*head)->data == y){
            b = head;
        }

        head = &((*head)->next);
    }
    
    if(a && b)
    {
        rev(a,b);
        rev(&(*a)->next , &(*b)->next);
    }
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