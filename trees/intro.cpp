
//    2
//   /  \
//  3    4

#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    node *root = new node(2);
    root->left = new node(3);
    root->right = new node(4);
    return 0;
}