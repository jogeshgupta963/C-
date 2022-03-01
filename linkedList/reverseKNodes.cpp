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

node* reverseKnodes(node* &head,int k){

    node* previous=NULL;
    node* current=head;
    node* nextPtr;
    int count=0;
    while(current!=NULL && count<k){
        nextPtr=current->next;
        current->next=previous;

        previous=current;
        current=nextPtr;

        count++;
    }
     if(nextPtr!=NULL)
     head->next = reverseKnodes(nextPtr,k);

     return previous;

}

void addElements(node* &head,int val){

    node* n = new node(val);
    if(head == NULL)
        {
            head=n;
            return;
        }
    node* temp = head;
    while(temp->next!=NULL){

        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp =head;
    while(temp!=NULL){
        cout<<temp->val<<" ->";
        temp=temp->next;
    }
}

int main()
{
    node* head = NULL;
    for(int i=1;i<=6;i++){
        addElements(head,i);
    }
    display(head);
    cout<<endl;
    node* newHead=reverseKnodes(head,2);
    display(newHead);
    return 0;
}