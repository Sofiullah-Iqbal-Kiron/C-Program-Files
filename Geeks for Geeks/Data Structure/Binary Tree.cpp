#include <bits/stdc++.h>
using namespace std;

/*class node
{
public:
    int data;
    node *left;
    node *right;
};

node *newNode(int value)
{
    node *Node = new node;
    Node->data = value;
    Node->left = NULL;
    Node->right = NULL;

    return Node;
}

int main()
{
    node *root = newNode(1);
}
*/

//Let's create a new struct for the tree.

struct Node
{
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

