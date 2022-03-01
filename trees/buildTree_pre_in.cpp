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
int search(int inorder[], int s, int last, int key)
{

    for (int i = s; i <= last; i++)
    {
        if (inorder[i] == key)
        {
            return i;
        }
    }
    return -1;
}

void inorderPrint(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderPrint(root->left);
    cout << root->data;
    inorderPrint(root->right);
}

node *buildTree(int preorder[], int inorder[], int start, int end)
{
    if (start > end)
        return NULL;
    static int index = 0;
    int curr = preorder[index++];
    node *root = new node(curr);
    if (start == end)
        return root;
    int pos = search(inorder, start, end, curr);
    root->left = buildTree(preorder, inorder, start, pos - 1);
    root->right = buildTree(preorder, inorder, pos + 1, end);

    return root;
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    node *root = buildTree(preorder, inorder, 0, 4);
    inorderPrint(root);
    return 0;
}