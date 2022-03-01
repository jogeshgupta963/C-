#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};


void display(node* head)
{
    node* temp = head;
    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node* head = new node(1);
    node* second = new node(12);
    node* third = new node(13);
    head->next = second;
    second->next = third;
    third->next= NULL;
    
    display(head);
    return 0;
}