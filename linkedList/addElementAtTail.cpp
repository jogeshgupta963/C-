#include<iostream>
using namespace std;


class node{
    public:
    int val;
    node* next;

    node(int val){

        this->val = val;
        next=NULL;
    }
};

void addElement(node* &head,int val)
{
    node* n =new node(val);
    node*temp = head;

    if(head == NULL){
        head=n;
        return;
    }

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}

void display(node* n){

    node* temp = n;
    
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    node* head = NULL;

    addElement(head,1);
    addElement(head,2);
    addElement(head,3);
    addElement(head,4);
    display(head);
    return 0;
}