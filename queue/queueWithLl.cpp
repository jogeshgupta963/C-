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
class queue {

        node* front;
        node* back;
        
        public:
        queue(){
            front=NULL;
            back=NULL;
        }

        void push(int x){

            node* n =new node(x);
            
            if(front ==NULL){
                front=n;
                back=n;
                return;
            }
            
                back->next = n;
                back= n;
            
        }

        void pop(){

            if(front == NULL){
                cout<<"NO element to pop";
                return ;
            }
            node* nodeToBeDeleted = front;
            front = front->next;

            delete nodeToBeDeleted;
        }   

        int peek(){
            
            return front->val;
        }
        bool empty(){
            return back->next == front;
        }

};


int main()
{   
    queue q;
    q.push(4);
    q.push(7);
    q.push(8);

    cout<<q.peek();
    q.pop();
    cout<<endl<<q.empty();

    cout<<q.peek()<<endl;
    return 0;
}