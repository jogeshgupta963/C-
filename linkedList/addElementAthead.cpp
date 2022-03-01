#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;


    node(int val){
        this->val=val;
        next=NULL;

    }
};

node* addElement(node* &head,int val){

    node* n =new node(val);

    node* temp= n;
    n->next=head;

    return n;
}
void display(node* head){
     
     node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" -> ";
        temp=temp->next;
    }
}
int main()
{
    node* n1 = new node(5);
    node* n2 = new node(7);
    node* n3 = new node(8);

    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;
    display(n1);
    cout<<endl;
    node* n = addElement(n1,19);
    display(n);
    return 0;
}