#include<iostream>
using namespace std;


class node{

    public:
    int val; 
    node* next;

    node(int data){
        val= data;
        next=NULL;
    }
};
void deletion(node*head,int val)
{
    node* temp = head;
    while(temp->next->val !=val ) {
        temp=temp->next;
    }
    node* toBeDeleted = temp->next; 
    temp->next = temp->next->next;
    delete toBeDeleted;
}
void insertElement(node* &head,int val){

    node* n = new node(val);
    if(head == NULL){
        head=n;
        return;
    }
    node* temp = head; 
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next=n;
}
void display(node* head)
{
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()

{
    node* head = NULL;

    insertElement(head,5);
    insertElement(head,7);
    insertElement(head,8);

    display(head);

    cout<<endl;

    deletion(head,7);
     
    display(head);
    return 0;
}