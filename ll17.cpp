// detect and remove loop hashing
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
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

void hashAndRemove(Node *head)
{
    unordered_set< Node* > s;
    Node *last = NULL;

    while(head != NULL)
    {
        if(s.find(head) == s.end())
        {
            s.insert(head);
            last = head;
            head = head->next;
        }
        else
        {
            last->next = NULL;
            break;
        }
        
    }
}

int main()
{
    Node *head = NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
   
    head->next->next->next->next->next = head->next->next;

    hashAndRemove(head);

    printList(head);

    return 0;
}