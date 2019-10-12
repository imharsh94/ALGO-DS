#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

Node* newNode(int dat)
{
    Node* temp = new Node;
    temp->data = dat;
    temp->next = NULL;
    return temp;
}

int main()
{
    Node* start = newNode(3);
    start->next = newNode(7);
    start->next->next = newNode(7);
    start->next->next->next = newNode(9);

    Node* node = start->next;

    cout<<&start->next<<'\n';
    cout<<&(node)<<'\n';
    cout<<'\n';


    cout<<start->next->next<<'\n';
    cout<<(node)->next<<'\n';
    cout<<endl;


    cout<<&start->next->data<<'\n';
    cout<<&node->data<<'\n';

    cout<<'\n';
   cout<<&start->next->next<<'\n';
   cout<<&node->next<<'\n';
    return 0;
}