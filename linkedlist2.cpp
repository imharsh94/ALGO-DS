//! remove duplicate elements from a linked list ITERATION
//!  INPUT 1->1->2->3
//!  OUTPUT 1->2->3

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
}

void printList(struct Node* start)
{
    while(start != NULL)
    {
        printf("%d ",start->data);
        start = start->next;
    }
}

void removeDuplicates(struct Node** head)
{
    struct Node* current = *head,*next_element;

    if(current == NULL)
        return ;

    while(current->next != NULL)
    {
        if(current->data == current->next->data)
        {
            next_element = current->next->next;
            free(current->next);
            current->next = next_element;
        }
        else
            current = current->next;
    }
}

int main()
{
    Node* start = newNode(3);
    start->next = newNode(7);
    start->next->next = newNode(7);
    start->next->next->next = newNode(9);
    cout<<start->data<<" "<<start->next->data<<'\n';
    removeDuplicates(&start);
    printList(start);
    return 0;
}