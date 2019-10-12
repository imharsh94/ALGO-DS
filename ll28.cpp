// to reverse linked list in k group size
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

void printList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* reverse(Node *head, int k)
{
    if(head == NULL || head->next == NULL)
        return head;

    Node *prev = NULL , *next=NULL , *current = head;
    int count=0;

    while(current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
 //   if(next != NULL)
         head->next = reverse(next , k);
    return prev ; 
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
    Node *head_new = reverse(head, 3);
    printList(head_new);
    return 0;
}