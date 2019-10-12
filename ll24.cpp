// check whether linked list is palindrome by reversing the list
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

void reverse(Node **head_ref)
{
    Node *prev = NULL , *next = NULL, *current = *head_ref;

    while(current != NULL)
    {
        next = current->next ;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

bool cmpList(Node *head1, Node *head2)
{
    while(head1 && head2)
    {
        if(head1->data == head2->data)
        {
            head1 = head1->next;
            head2 = head2->next;
        }
        else
        {
            return false;
        }
        
    }
    return true;
}

bool isPalin(Node *head)
{
    Node *slow = head , *fast = head;
    Node *midnode = NULL;
    Node *second_half , *previous_of_slow;
    bool res = true;

    if(head && head->next)
    {
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next ;
            previous_of_slow = slow;
            slow = slow->next;
        }

        if(fast != NULL)
        {
            midnode = slow;
            slow = slow->next;
        }

        second_half = slow;
        previous_of_slow->next = NULL;
        reverse(&second_half);

        res = cmpList(head , second_half);

        reverse(&second_half);

        if(midnode != NULL)
        {
            previous_of_slow->next = midnode;
            midnode->next = second_half;
        }
        else
        {
            previous_of_slow->next = second_half;
        }
        


    }
    return res;
}


int main()
{
    Node *head = NULL;
    push(&head,11);
    push(&head,47);
   // push(&head,35);
    push(&head,48);
    push(&head,11);
   
    bool ans = isPalin(head);
    if(ans)
        cout<<"It's palindrome\n";
    else
    {
        cout<<"Not palindrome\n";
    }
    
    return 0;
}