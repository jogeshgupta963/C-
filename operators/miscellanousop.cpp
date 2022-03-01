#include<iostream>
using namespace std;

// Sizeof()
// ternanry conditon? X:Y
// Cast ()
// comma  eg: a=(2,3,4) a=4 value aayegi
//& returns address
//*-pointer
int main()
{
    //cast
    char ch='a';
       cout<<"cast operator "<<int(ch)<<endl;
       //& operator
       int a;
       cout<<"and operator gives address "<<&(a)<<endl;
       //pointer
       int*b=&a;

    return 0;
}