#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

Node* newnode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
}

void printList(struct Node* node)
{
    cout<<node<<'\n';
    while(node != NULL)
    {
        printf("%d ",node->data);
        node = node->next;
    }
}

void push(struct Node** head,int data)
{
    
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = *head;
    *head = node;
}

int main()
{
    struct Node* h = newnode(10);
    push(&h,1);
    push(&h,5);
    push(&h,8);
    cout<<h<<'\n';
    printList(h);

    return 0;
}