// detect and remove loop in linked list
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void printList(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* newNode(int key)
{
    Node *temp = (Node*)malloc(sizeof(struct Node));
    temp->data = key;
    temp->next = NULL;
    return temp;
}

void removeLoop(Node *loop_node, Node *head)
{
    Node *ptr1, *ptr2;
    ptr1 = head;
    

    while(1)
    {
        ptr2 = loop_node;
        while(ptr2->next != loop_node && ptr2->next != ptr1)
            ptr2 = ptr2->next;

        if(ptr2->next == ptr1)
            break;
        
        ptr1 = ptr1->next;
    }

    ptr2->next  = NULL;
}

int detectAndRemove(Node *list)
{
    Node *slow = list , *fast=list;

    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        {
            removeLoop(slow, list);
            return 1;
        }
    }
    return 0;
}

int main()
{
    struct Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
     head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    head->next->next->next->next->next = head->next->next ;

    detectAndRemove(head);
    printList(head);

    return 0;
}