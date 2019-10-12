// get the intersection point of the linked list
// using hashing

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

void detect(Node *l1, Node *l2)
{
    cout<<&l1<<'\n';
    cout<<l1<<'\n';
    Node *l = l1;
    unordered_set< Node* > s;
    while(l != NULL){
        s.insert(l);
        l = l->next;
    }

    while(l2)
    {
        if(s.find(l2) != s.end()){
            cout<<"They intersect at "<<l2->data<<'\n';
            break;
        }
        l2 = l2->next;
    }
}

int main(){

     Node *head = NULL;
    push(&head,1);
    push(&head,48);
    push(&head,35);
    push(&head,4);
    push(&head,11);
    cout<<&head<<'\n';
    cout<<head<<'\n';

    Node *b =NULL;
    push(&b,5);
    push(&b,6);
    push(&b,7);
    b->next->next->next = head;

    detect(head,b);
    return 0;
}