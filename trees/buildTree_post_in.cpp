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

void printInoder(node *root)
{

    if (root == NULL)
        return;

    printInoder(root->left);
    cout << root->data;
    printInoder(root->right);
}

int search(int inorder[], int start, int end, int key)
{

    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == key)
        {
            return i;
        }
    }
    return -1;
}
node *buildTree(int inorder[], int postorder[], int start, int end)
{
    static int index = 6;

    if (end < start)
        return NULL;

    int curr = postorder[index--];
    node *root = new node(curr);
    if (end == start)
        return root;

    int pos = search(inorder, start, end, curr);
    root->right = buildTree(inorder, postorder, pos + 1, end);
    root->left = buildTree(inorder, postorder, start, pos - 1);

    return root;
}
int main()
{
    int postorder[] = {4, 5, 2, 6, 7, 3, 1};
    int inorder[] = {4, 2, 5, 1, 6, 3, 7};

    node *root = buildTree(inorder, postorder, 0, 6);
    printInoder(root);
    return 0;
}