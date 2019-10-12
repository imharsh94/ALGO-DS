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
    cout<<endl;
}



void change(Node* node)
{
    cout<<&node<<'\n';
    cout<<(node->next)<<'\n';
    Node *curr = node,*temp;
    temp = curr;
    //cout<<node->next<<'\n';

    node = curr->next;
    free(temp);
    temp = (node)->next;
    (node)->next = temp->next;
    free(temp);

}

int main()
{
    
    Node* start = newNode(3);
    start->next = newNode(7);
    start->next->next = newNode(17);
    start->next->next->next = newNode(9);
    start->next->next->next->next = newNode(19);
    printList(start);
    cout<<&start<<'\n';
    cout<<(start->next)<<'\n';
    cout<<&(start->next)<<'\n';
   // change(start);
    //cout<<&start<<'\n';

    Node* n = start;
    cout<<&n<<'\n';
    cout<<n->next<<'\n';
    cout<<&(n->next)<<'\n';
     printList(start);
    return 0;
}