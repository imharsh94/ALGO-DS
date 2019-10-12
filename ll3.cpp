// print last k nodes

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *getNode(int data){
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printLast(Node *head, int& count, int k)
{
    if(!head)
        return;
    
    printLast(head->next , count, k);

    //count++;

    if(count < k)
        cout<<head->data<<" ";
    count++;
}


int main(){
    Node *head = getNode(1);
    head->next = getNode(2);
    head->next->next = getNode(3);
    head->next->next->next = getNode(4);
    head->next->next->next->next = getNode(5);
    int count=0;
    printLast(head,count,3);
    return 0;
}