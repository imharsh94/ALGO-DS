#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left,*right;
};

Node* newNode(int k)
{
    Node *temp = new Node;
    temp->key = k;
    temp->left = temp->right = NULL;
    return temp;
}

bool findPath(Node *root, vector< int > &path, int k)
{
    if(root == NULL)
	return false;
    path.push_back(root->key);

    if(root->key == k)
	return true;

    if((root->left && findpath(root->left,path,k)) ||
       (root->right && findpath(root->right,path,k)))
	return false;

    path.pop_back();
    return false;
}

    
int main()
{
    return 0;
}
    

