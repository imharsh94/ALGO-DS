#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void push(Node **head_ref, int data)
{
    //scout<<&(*head_ref)<<'\n';
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node ;
}


void printList(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

void append(struct Node *head_ref,int data)
{
    cout<<&(head_ref->next)<<'\n';
    //cout<<head_ref->data<<'\n';
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node *last  = head_ref;
    new_node->data =  data;
    new_node->next = NULL;


    if(head_ref == NULL)
    {
        head_ref = new_node;
        return;
    }


    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

int main()
{
    struct Node *head = NULL;
   // cout<<&head<<'\n';
    //append(head,8);
    push(&head,6);
    push(&head,5);
    cout<<&(head->next)<<"\n";
    append(head,1);
   // append(head,7);

    //printList(head);
    return 0;
}