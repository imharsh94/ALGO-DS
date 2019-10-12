#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

struct node* newNode(int data)
{
    struct node* temp = (struct node*)
                        malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int height(struct node *root)
{
    if( root == NULL)
        return 0;
    else
    {
        int lh = height(root->left);
        int rh = height(root->right);

        if(lh > rh)
            return (lh+1);
        else
            return (rh+1);
    }
}

void printlevel(struct node *root,int level)
{
    if(root == NULL)
        return;
    if(level == 1)
        printf("%d\t",root->data);
    else if(level > 1)
    {
        printlevel(root->left,level-1);
        printlevel(root->right, level-1);
    }
}

void level(struct node *root)
{
    int h = height(root);
    int i;
    for(i=1 ; i<=h ; i++)
        printlevel(root,i);
}

int main()
{
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("The level order traversal is \n");
    level(root);
    return 0;
}