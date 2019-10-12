// reverse list in group using stack
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


Node* reverse(Node *head, int k)
{
    stack< Node* > st;
    Node *prev = NULL , *current = head;

    while(current != NULL)
    {
        int count =0;
        while(current != NULL && count < k)
        {
            st.push(current);
            current = current->next;
            count++;
        }

        while(st.size() > 0)
        {
            if(prev == NULL)
            {
                prev = st.top();
                head = prev;
                st.pop();
            }
            else
            {
               prev->next = st.top();
               prev = prev->next;
               st.pop();
            }
            
        }

    }

    prev->next = NULL;
    return head;
}


int main()
{
    Node *head = NULL;
    push(&head,15);
    push(&head,47);
    push(&head,35);
    push(&head,48);
    push(&head,11);

    printList(head);
    head = reverse(head, 3);
    printList(head);
    return 0;
}