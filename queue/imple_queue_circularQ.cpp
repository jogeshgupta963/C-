#include <iostream>
using namespace std;
#define n 100

class stack
{

    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {

        if (top == n - 1)
        {
            cout << "Stack filled " << endl;
            return;
        }
        arr[++top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop out" << endl;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "empty list" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
};

class queueLinear
{
    stack st1;
    stack st2;

public:
    void enqueue(int x)
    {
        while (!st1.empty())
        {
            st2.push(st1.Top());
            st1.pop();
        }
        st1.push(x);
        while (!st2.empty())
        {
            st1.push(st2.Top());
            st2.pop();
        }
    }

    int dequeue()
    {
        if (st1.empty())
        {
            cout << "No ele in queue";
            return -1;
        }
        int x = st1.Top();
        st1.pop();
        return x;
    }
};

class queue
{
    stack st;
    int *arr;
    int front;
    int back;

public:
    queue(stack st)
    {
        this->st = st;
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void enqueue()
    {
        if (back == n - 1)
        {
            cout << "queue full";
            return;
        }
        arr[++back] = st.Top();
        st.pop();
        if (front == -1)
            front++;
    }
    int dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "No element in the stack";
        }

        return arr[front++];
    }
};

int main()
{
    // queue q;
    stack st;
    int len;
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        int z;
        cin >> z;
        st.push(z);
    }
    queue q(st);
    q.enqueue();
    q.enqueue();
    q.enqueue();
    q.enqueue();
    cout << q.dequeue();

    // int choice;
    // cin >> choice;
    // switch (choice)
    // {
    // case 1:

    //     break;
    // case 2:
    //     // circularQueue(st);
    // default:
    //     break;
    // }
    return 0;
}