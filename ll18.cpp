// n th node from end limked list
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

void nLast(Node *head,int n)
{
    Node *ptr1 = head, *ptr2 = head;
    int count=0;

    while(count < n)
    {
        ptr2 = ptr2->next;
        count++;
    }

    while(ptr2 != NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    
    cout<<ptr1->data<<'\n';
}

int main()
{
    Node *head = NULL;
    push(&head,11);
    push(&head,215);
    push(&head,35);
    push(&head,48);
    push(&head,59);
   
    nLast(head,3);

    return 0;
}