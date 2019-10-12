#include<bits/stdc++.h>
using namespace std;


// to check whether the linked list is palindrome using stack
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


bool  palin(Node *head){
    stack< Node* > st;

    Node *temp = head;
    while(temp)
    {
        st.push(temp);
        temp = temp->next;
    }

    while(!st.empty())
    {
        temp = st.top();
        st.pop();
        if(temp->data != head->data)
            return false;

        head = head->next;
    }
    return true;
}

int main()
{
    Node *head = NULL;
    push(&head,11);
    push(&head,48);
    push(&head,35);
    push(&head,48);
    push(&head,11);
   
    bool ans = palin(head);
    if(ans)
        cout<<"It's palindrome\n";
    else
    {
        cout<<"Not palindrome\n";
    }
    
    return 0;
}