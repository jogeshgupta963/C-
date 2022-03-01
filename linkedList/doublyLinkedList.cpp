#include<iostream>
using namespace std;


class node{
    public:
    int val;
    node* prev;
    node* next;
    node(int val){
        this->val=val;
        next=NULL;
        prev=NULL;
    }
};

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

void removeNode(node* &head,int pos){

    if(pos==1)
    {

        node* toDelete=head;
        head=head->next; 
        head->prev=NULL;
        delete toDelete;
    }
    int count=1;
    node* temp=head;
    while(temp->next!=NULL || count<=pos){

        if(count++==pos){
             temp->next->prev = temp->prev;
             if(temp->next!=NULL)
             temp->prev->next = temp->next;
            delete temp;
        }
        temp=temp->next;
    }
}
void display(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->val<<" "
        ;temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    for(int i=1;i<10;i++)
        addAtTail(head,i);
        display(head);
        removeNode(head,5);
        display(head);
    return 0;
}