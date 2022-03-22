#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
int sumTree(node *root)
{

    if (root == NULL)
        return 0;

    int prevData = root->data;
    int rootData = sumTree(root->left) + sumTree(root->right);
    root->data = rootData + prevData;
    return rootData + prevData;
}
void preorder(node *root)
{

    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << sumTree(root);
    cout << endl;
    preorder(root);
    return 0;
}