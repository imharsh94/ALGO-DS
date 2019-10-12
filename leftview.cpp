#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left,*right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data= item;
    temp->left=temp->right=NULL;
    return temp;
}

void leftView(struct node *root, int level, int *max_level)
{
    if(root == NULL)
        return;
    
    if(*max_level < level)
    {
        printf("%d\t",root->data);
        *max_level = level ;
    }

    leftView(root->left, level+1, max_level);
    leftView(root->right, level+1, max_level);
}

int main()
{
    int max_level = 0;
    struct node *root = newNode(12);
    root->left=newNode(10);
    root->right=newNode(30);
    root->right->left = newNode(25);
    root->right->right = newNode(40);
    leftView(root,1,&max_level);
    return 0;
}