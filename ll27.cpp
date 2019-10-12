// add 2 linked lists
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

void swap(Node **a, Node **b)
{
    Node *t = *a;
    *a = *b;
    *b = t;
}

int getSize(Node *node)
{
    int size = 0;
    while(node != NULL)
    {
        node = node->next;
        size++;
    }
    return size;
}

Node* addSameSize(Node *head1, Node *head2, int *carry)
{
    if(head1 == NULL)
        return NULL;

    int sum;
    Node *result = (Node *)malloc(sizeof(Node));

    result->next = addSameSize(head1->next, head2->next, carry);

    sum = head1->data + head2->data + *carry;
    *carry = sum/10;
    sum = sum % 10;

    result->data = sum;

    return result;
}

void addCarryToRemaining(Node *head1 , Node *cur, int *carry, Node **result)
{
    int sum;

    if(head1 != NULL)
    {
        addCarryToRemaining(head1->next, cur,carry,result);
        sum = head1->data + *carry;
        *carry = sum /10;
        sum %= 10;

        push(result , sum);
    }
}

void addList(Node *head1, Node *head2, Node **result)
{
    Node *cur;
    if(head1 == NULL)
    {
        *result = head2;
        return;
    }

    if(head2 == NULL)
    {
        *result = head1;
        return;
    }

    int size1 = getSize(head1);
    int size2 = getSize(head2);
    int carry = 0;

    if(size1 == size2)
        *result = addSameSize(head1, head2, &carry);
    else
    {
        int dif = abs(size1 - size2);

        if(size1 < size2)
            swap(&head1, &head2);

        for(cur = head1 ; dif-- ; cur = cur->next);

        *result = addSameSize(cur , head2, &carry);
        addCarryToRemaining(head1, cur , &carry, result);
    }


    if(carry)
        push(result, carry);
    
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
int main()
{
    Node *head1 = NULL , *head2=NULL , *result=NULL;
    int arr1[] = {9,9,9};
    int arr2[]= {1,8};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    int i;
    for(i=size1-1 ; i>=0 ; i--)
        push(&head1,arr1[i]);

    for(i=size2-1 ; i>=0 ; i--)
        push(&head2,arr2[i]);

    addList(head1, head2, &result);
    printList(result);
    return 0;
}