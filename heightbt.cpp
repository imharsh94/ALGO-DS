#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

struct node* newNode(int data)
{
    struct node* temp =(struct node*)
                        malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int height(struct node *root)
{
    if(root == NULL)
        return -1;
    return (max(height(root->left),height(root->right))+1);
}

int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("Height is  %d",height(root));
    return 0;
}