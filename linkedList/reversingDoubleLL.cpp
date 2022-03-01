#include<iostream>
using namespace std;

class node{

    public:
    int val;
    node* next;
    node* prev;

    node(int val){

        this->val=val;
        next=NULL;
        prev=NULL;

    }
};

void reverse(node* &head){

    node *temp;
    node *current = head;
     
    /* swap next and prev for all nodes of
    doubly linked list */
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;            
        current = current->prev;
    }

}
void addAtHead(node* &head,node* n){

    node* temp=head;
    n->next=head;
    if(head!=NULL)
    head->prev=n;

    head=n;
}
void addAtTail(node* &head,int val){

    node* n= new node(val);
    if(head==NULL){
        addAtHead(head,n);return;
    }
    node*temp=head;
    while(temp->next!=NULL){

        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void addElement(node* head,int val){

    node* n = new node(3);
    if(head==NULL){
        head=n;return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}
void addElements(node* &head,int val){

    node* n = new node(val);
    if(head==NULL){
        head=n;return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp->next->prev=temp;
        temp=temp->next;
    }
    temp->next=n;

}

void print(node* head)
{
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }

}
    int main()
{
    node* head=new node(5);
    for(int i=5;i<=10;i++){
        // addElements(head,i);
        // addElement(head,i);
        addAtTail(head,i);
    }   
    print(head);
    cout<<endl;
    reverse(head);
    print(head);
    return 0;
}