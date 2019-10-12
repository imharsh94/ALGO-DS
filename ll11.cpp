// reversing linked list
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

struct LinkedList
{
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }

    void print()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    void reverse()
    {
        Node *current = head;
        Node *prev = NULL, *next=NULL;

        while(current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
};

int main()
{
    LinkedList l;
    l.push(1);
    l.push(2);
    l.push(3);
    l.push(4);
    l.print();
    l.reverse();
    l.print();
    return 0;
}