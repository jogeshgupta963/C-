#include <iostream>
#include <queue>
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

void viewRight(node *root, queue<int> *q1)
{
    if (root == NULL)
        return;

    queue<node *> q;

    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
            q1->push(temp->data);
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
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

    queue<int> q1;
    viewRight(root, &q1);
    cout << q1.front();
    q1.pop();
    cout << q1.front();
    q1.pop();
    cout << q1.front();
    q1.pop();
    cout << q1.front();
    return 0;
}