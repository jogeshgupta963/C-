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


node* merge(node* &head1,node* &head2){

    node*temp1=head1;
    node*temp2=head2;
    node* dummyNode = new node(-1);
    node*temp3=dummyNode;

    while (temp1!= NULL || temp2!=NULL){
        
        if(temp1->val > temp2->val ){

            temp3->next=temp2;
            temp2=temp2->next;
        }
        else{

            temp3->next=temp1;
            temp1=temp1->next;
        }
        temp3=temp3->next;
    }
    while(temp1!=NULL){
        temp3->next=temp1;
        temp1=temp1->next;
        temp3=temp3->next;
    }
    while(temp2!=NULL){
        
        temp3->next=temp2;
        temp2=temp2->next;
        temp3=temp3->next;
    }
    return dummyNode->next;
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
    cout<<endl;
}

int main()
{
    node* head1 = NULL;
    node* head2 = NULL;
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int k;cin>>k;
        addElements(head1,k);
        
    }
     int nu;cin>>nu;
    for(int i=1;i<=nu;i++){
        int k;cin>>k;
        addElements(head2,k);
        
    }
    display(head1);
    display(head2);
    node*head=merge(head1,head2);
    display(head);
    
    return 0;
}