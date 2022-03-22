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

int height(node *root)
{
    if (root == NULL)
        return 0;

    int lHeight = height(root->left);
    // cout << lHeight << " ";
    int rHeight = height(root->right);
    // cout << rHeight << " ";

    return max(lHeight, rHeight) + 1;
}
// O(n2)
int diameter(node *root)
{
    if (root == NULL)
        return 0;
    int ht = height(root->left) + height(root->right) + 1;
    int lDiameter = diameter(root->left);
    int rDiameter = diameter(root->right);

    return max(ht, max(lDiameter, rDiameter));
}
// O(n)
int diameter2(node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    int lh, rh = 0;
    int lDia = diameter2(root->left, height);
    int rDia = diameter2(root->right, height);

    *height = max(lh, rh) + 1;
    return max(lh + rh + 1, max(rDia, lDia));
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
    root->right->right->right = new node(8);

    cout << diameter(root);
    return 0;
}