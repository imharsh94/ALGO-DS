// check whether linked list is palindrome using recursion
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


bool  palin(Node **left,Node *head)
{
    if(head == NULL)
        return true;

    bool p = palin(left, head->next);
    if(p)
    {
        if(head->data == (*left)->data)
        {
            *left = (*left)->next;
            return true;
        }
        else
        {
            return false;
        }
        
    }
    else
    {
        return false;
    }
    
}

int main()
{
    Node *head = NULL;
    push(&head,11);
    push(&head,47);
    push(&head,35);
    push(&head,48);
    push(&head,11);
   
    bool ans = palin(&head,head);
    if(ans)
        cout<<"It's palindrome\n";
    else
    {
        cout<<"Not palindrome\n";
    }
    
    return 0;
}