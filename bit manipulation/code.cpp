#include<iostream>
using namespace std;
int getBit(int n,int pos){  //getting bit of the req position
    return ((n&(1<<pos))!=0);
}

int setBit(int n,int pos){  //setting a bit(1) to a specified pos
    return (n|(1<<pos));
}

int clearBit(int n, int pos){//clearing bit of a pos to zero
     return (n&(~(1<<pos)));
}

int updateBit(int n,int pos,int value){//updating bit of a pos
    //clearBit
    n= ( n & (~(1<<pos)));
    //setBit
    return (n|(value<<pos));
}


int main()
{
    // cout<<getBit(5,2);
        // cout<<setBit(5,1); 
        // cout<<clearBit(5,2); 
        cout<<updateBit(5,1,1); 
           return 0;
}  