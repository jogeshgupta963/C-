#include <iostream>
#include <vector>
using namespace std;

//      5
//     / \
//    1   7
//     \
//      3
//     / \
//    2   4

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *insertBSt(node *root, int val)
{

    if (root == NULL)
    {
        return new node(val);
    }

    if (val < root->data)
    {
        root->left = insertBSt(root->left, val);
    }
    else
    {
        root->right = insertBSt(root->right, val);
    }

    return root;
}

void inorder(node *root)
{

    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    int n;
    cin >> n;
    vector<int>
        v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    node *root = NULL;
    root = insertBSt(root, v[0]);

    for (int i = 1; i < n; i++)
    {
        insertBSt(root, v[i]);
    }

    // printing inorder
    inorder(root);
}