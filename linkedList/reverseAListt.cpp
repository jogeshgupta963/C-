#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int val){
        this->val = val;
        next = NULL;
    }
};

void addElements(node* &head,int val)
{
    node* n =new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void reverse(node* &head){

    node* current =head;
    node* previous = NULL;
    node* after;
    node*temp=head;
    while(current!=NULL){

        after=current->next;
        current->next=previous;
        previous=current;
        current=after;
        

    }
    head=previous;
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
    node* head=NULL;
    addElements(head,5);
    addElements(head,6);
    addElements(head,7);

    display(head);

    reverse(head);
    
    display(head);
    return 0;
}