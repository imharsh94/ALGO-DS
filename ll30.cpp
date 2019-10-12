// delete every kth node linked list
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

void freeList(Node *node)
{
    while(node != NULL)
    {
        Node *next = node->next;
        delete(node);
        node = next;
    }
}

Node* deletek(Node* head,int k)
{
    if(head == NULL)
        return NULL;
    if(k==1)
    {
        freeList(head);
        return NULL;
    }

    Node *ptr=head , *prev=NULL;
    int count =0;
    while(ptr != NULL)
    {
        count++;
        if(k == count)
        {
           // Node *temp = ptr;
            delete(prev->next);
            cout<<ptr->data<<'\n';
            prev->next = ptr->next;
            count=0;
        }
        
        prev = ptr;
        ptr = ptr->next;
    }
    return head;
}

int main()
{
    Node *head = NULL;
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);

    printList(head);
    head = deletek(head, 2);
    printList(head);
    return 0;
}