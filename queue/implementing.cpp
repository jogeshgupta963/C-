#include<iostream>
using namespace std;
#define n 20


class queue{

    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int[n];
        front=-1;
        back=-1;
    }

    void push(int x){

        if(back == n-1){
            cout<<"queue full";
            return;
        }    
        
        arr[++back]=x;

        if(front==-1 )
            front++;
    }
    void dequeue(){
        if(front==-1 || front>back){
            cout<<"NO element in queue";
        }
        front++; 
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"NO element in queue";
        }
        return arr[front];  
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }

};

int main()
{   
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek();
    q.dequeue();
    cout<<q.peek();
    return 0;
}