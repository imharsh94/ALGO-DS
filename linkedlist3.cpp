//! remove all duplicates from alinked list
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void printList(struct Node* node)
{
    while(node != NULL)
    {
        printf("%d ",node->data);
        node = node->next;
    }
}

void removeAllDuplicates(struct Node* &head_ref)
{
    struct Node* curr = head_ref, *prv = NULL, *alsoTobeDeleted = NULL;
    while (curr != NULL)
    {

    if(curr->next && curr->data == curr->next->data)
    {
        alsoTobeDeleted = curr;
        struct Node* tmp = curr->next;
        curr->next = (tmp != NULL)?tmp->next:NULL;
        //~cout<<curr->next->data<<'\n';
        
        if(tmp)
            free(tmp);
    }
    else if(alsoTobeDeleted != NULL)
    {
       // cout<<alsoTobeDeleted->data<<'\n';
        if(head_ref == alsoTobeDeleted)
        {
            curr = head_ref = alsoTobeDeleted->next;
           // cout<<alsoTobeDeleted->next->data<<'\n';
        }
        else
            curr  = alsoTobeDeleted->next;

        free(alsoTobeDeleted);
            alsoTobeDeleted = NULL;
    }
    else
    {
   // prv = curr;
    curr = curr->next;
    }
    }
}

int main()
{
    struct Node* start = newNode(28);
    start->next = newNode(28);
    start->next->next = newNode(28);
    start->next->next->next = newNode(3);
    /**struct Node* temp = start->next;
    free(temp);

    start->next = start->next->next;
    struct Node* x = start;

    cout<<x->data<<'\n';
    cout<<x->next->data<<'\n';**/
    cout << "List before removal " <<   
                  "of duplicates\n"; 
    printList(start); 
      
    removeAllDuplicates(start); 
      
    cout << "\nList after removal " <<  
                   "of duplicates\n"; 
    printList(start); 

    return 0;
}
