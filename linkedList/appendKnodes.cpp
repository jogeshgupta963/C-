//append last k nodes in front

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


int length(node* head){

    int len=0;
    node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void append(node* &head,int pos){

    node* temp=head;
    node* newTail;
    node*tail;
    int count=1;
    int l=length(head);
    while(temp->next!=NULL){

        if(l-pos==count){
            newTail=temp;
            
        }
        count++;
        temp=temp->next;
    }
    temp->next=head;
    head=newTail->next;
    newTail->next=NULL;
    
}

void addElement(node* &head,int val){

    node*temp=head;
    node* n=new node(val);

    if(head==NULL)
    {
        head=n;return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
     
     node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" -> ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    for(int i=1;i<=7;i++){
        addElement(head,i);
    }
    display(head);
    append(head,4);
    display(head);
    return 0;
}