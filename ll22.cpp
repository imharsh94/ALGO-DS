// detect intersection of linked list through counting method
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
    int c1=0, c2=0;
    Node *ll1 = l1 , *ll2 = l2;
    while(ll1){
        c1++;
        ll1 = ll1->next;
    }

    while(ll2){
        c2++;
        ll2 = ll2->next;
    }

    int m = abs(c1 - c2);

    if(c1 > c2){
        while(m > 0)
        {
            l1 = l1->next;
            m--;
        }
    }
    else{
        while(m>0)
        {
            l2 = l2->next;
            m--;
        }
    }

    while(l1 && l2)
    {
        if(l1 == l2)
        {
            cout<<" Intersection point = "<<l1->data;
            break;
        }
        l1 = l1->next;
        l2 = l2->next;

    }
}

int main()
{
    Node *head = NULL;
    push(&head,1);
    push(&head,48);
    push(&head,35);
    push(&head,4);
    push(&head,11);
    push(&head,77);
    //cout<<&head<<'\n';
    //cout<<head<<'\n';

    Node *b =NULL;
    push(&b,5);
    push(&b,6);
    push(&b,7);
    b->next->next->next = head->next->next->next->next;



    detect(head,b);
    return 0;
}