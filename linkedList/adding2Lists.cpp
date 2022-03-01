#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int val)
    {
        this->val = val;
        next=NULL;

    }
    
};

void addElements(node* &head, int val){

    node* n =new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp =head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" -> ";
        temp=temp->next;
    }
    cout<<endl;
}

void add(node* &sumHead,node* head1,node*head2){

    node* temp1=head1;
    node* temp2=head2;
    for(int i=1;i<=3;i++){
        addElements(sumHead,temp1->val+temp2->val);

        temp1=temp1->next;
        temp2=temp2->next;
    }
    
}

int main()
{
    node* head1=NULL;
    node* head2=NULL;

    int n=7;
    for(int i=1 ; i<=3; i++){
        addElements(head1,n++);
        addElements(head2,i);
    }
    display(head1);
    display(head2);

    node* sumHead=NULL;
    add(sumHead,head1,head2);
    display(sumHead);
    return 0;
}