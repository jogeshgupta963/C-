#include<iostream>
using namespace std;



class node{
    public:
    int val;
    node* next;
    node(int val)
    {
        this->val=val;
        next=NULL;
    }
};

void makeCycle(node* &head,int pos){

    node* temp=head;
    node* startNode;int count=1;
    while(temp->next!=NULL){

        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool detectCycle(node* head){

    node* fastPtr=head;
    node* slowPtr=head;

    while(fastPtr!=NULL && fastPtr->next!=NULL){

        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next->next;
        if(slowPtr == fastPtr){
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head){

    node* fastPtr=head;
    node* slowPtr=head;

    while(fastPtr!=NULL && fastPtr->next!=NULL){

        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next->next;
        if(slowPtr == fastPtr){
            fastPtr=head;
            break;
        }
    }
    while(fastPtr->next != slowPtr->next ){

        slowPtr=slowPtr->next;
        fastPtr=fastPtr->next;
    }
    slowPtr->next=NULL;
    
}

void addElement(node* &head,int val){

    node* n =new node(val);
    if(head==NULL){
        head=n;return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{   
    node* head =NULL;
    for(int i=1;i<10;i++){

        addElement(head,i);
    }
    
    makeCycle(head,5);
    
    cout<<detectCycle(head);
    
    removeCycle(head);
    
    
    display(head);
    return 0;
}