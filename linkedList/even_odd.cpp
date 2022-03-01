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

void evenOdd(node*&head){

    
    node* odd=head;
    node*even=head->next;
    node*evenBackup=head->next;

    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next; 
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenBackup;
    if(odd->next!=NULL){
        even->next=NULL;
    }
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
    cout<<"NULL"<<endl;
}

int main()
{
    node*head=NULL;
    for(int i=1;i<10;i++){
        addElements(head,i);
    }
    display(head);
    evenOdd(head);
    display(head);
    return 0;
}