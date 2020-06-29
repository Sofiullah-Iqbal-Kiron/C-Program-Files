#include <bits/stdc++.h>
using namespace std;

//This is the structure for creating a node.
struct node
{
    int data;
    node *left, *right;
};

node *make_node(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->left = NULL;
    new_node->right = NULL;
}

void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->data;
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data;
        inorder(root->right);
    }
}

void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data;
    }
}

int main()
{
    node *root;
    root = make_node(1);
    root->left = make_node(2);
    root->right = make_node(3);
    root->left->left = make_node(4);
    root->left->right = make_node(5);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
}