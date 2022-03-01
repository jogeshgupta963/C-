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

void removeNode(node* &head,int pos){

    if(pos==1){
        node*toDelete=head;
        node*temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=head->next;
        head=head->next;
        delete toDelete;
        return;
    }
    node*temp=head;
    int count=1;
    pos--;
    while(temp->next!=head){

        if(count++==pos){
            node* toDelete=temp->next;
            temp->next=temp->next->next;
            delete toDelete;
            return ;
        }
        temp=temp->next;
    }

}

void addAtHead(node* &head,int val){

    node* n =new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;

    }
    n->next=head;
    temp->next=n;
    n=head;
}

void addAtTail(node* &head,int val){

    if(head==NULL){
        addAtHead(head,val);
        return;
    }
    node* n =new node(val);
    node*temp=head;
    do{
        temp=temp->next;
    }while(temp->next!=head);

    temp->next=n;
    n->next=head;

}

void display(node*head){

    node*temp=head;
    do{
        cout<<temp->val<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main()
{
    node*head=NULL;

    for(int i=1;i<=7;i++){
        addAtTail(head,i);
    }

    display(head);
    removeNode(head,1);
    display(head);
    return 0;
}