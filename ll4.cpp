// reverse linked list using stack
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void reverseList(Node *head)
{
    stack< Node* > st;

    while(head != NULL)
    {
        st.push(head);
        head = head->next;
    }

    while(!st.empty())
    {
        cout<<st.top()->data<<" ";
        st.pop();
    }
    cout<<endl;
}


void push(Node **head, int data)
{
     Node* new_node = (Node *)malloc(sizeof (Node));
     new_node->data = data;
     new_node->next = (*head);
     (*head) = new_node ;
    
}

int main()
{
    Node *head = NULL;
    push(&head,1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 5);

    reverseList(head);
    return 0;
}