#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        next = NULL;
    }
};

void intersect(node*&head1,node*&head2,int k){
        node*temp1=head1;
        node*temp2=head2;
        k--;
        while(k--){
            temp1=temp1->next;
        }
        while(temp2->next!=NULL){
            temp2=temp2->next;
        }
        temp2->next=temp1;

}

int length(node *head)
{

    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int intersectionPoint(node *&head1, node *&head2)
{
    int len1 = length(head1);
    int len2 = length(head2);

    node *temp1 = head1;
    node *temp2 = head2;
    int count = 0;
    if (len1 != len2){
        
        len1 %= len2;
        while (len1 - len2 != count){

            if (len1 > len2){
                temp1 = temp1->next;
            }
            else if (len2 > len1){
                temp2 = temp2->next;
            }
            count++;
        }
    }
    while(temp1->next!=NULL){
        if(temp1->next == temp2->next){
            return temp1->val;
        }
        temp1=temp1->next;
        temp2=temp2->next;
        count++;
    }
    return -1;
}

void addElements(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}


void display(node *head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    for(int i=1;i<=6;i++){
    
     addElements(head1,i);
    }
    for(int i=1;i<=3;i++){
        if(i==3){
            intersect(head1,head2,i);
        }else
        addElements(head2,5);
    }
    display(head1);
    cout<<intersectionPoint(head1,head2)<<endl;
    display(head2);
    return 0;
}
