#include<bits/stdc++.h>
using namespace std;

// basic understanding

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


int main()
{
    Node *head = NULL;
   

    push(&head,11);
    push(&head,48);
    push(&head,35);
    push(&head,48);
    push(&head,11);
     
    Node *b = head;

    cout<<head<<'\n';
    cout<<b<<'\n';

    cout<<&head<<'\n';
    cout<<&b<<'\n';

    cout<<&head->next<<'\n';
    cout<<&b->next<<'\n';
    
    cout<<head->next<<'\n';
    cout<<b->next<<'\n';
    cout<<endl;

    
    Node **c = &(head->next);
    cout<<&c<<endl;
    cout<<c<<endl;
    cout<<*c<<'\n';
    cout<<head->next<<'\n';
    cout<<(*c)->data<<'\n';

    return 0;
}