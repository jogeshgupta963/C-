#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    
    for(int i=2;i<n;i++)
    {
        
        if(n%i==0)
            return false;
    }
    
    return true;
}
int checkPrime(int a,int b,int k)
{
    int count=0;
    int i;
    for(i=a-1,i<=b;i++;)
    {
        
        if(isPrime(i) || i==2)
        {
         count++;
        }
        if(count == k)
        {
            if(i>b)
            return -1;
            return i;
        }
	}
    
    return -1;
}
int main()
{
    
    int q,a,b,k;
    cin>>q;
    
    for(int i=0;i<q;i++)
    {
        
        cin>>a>>b>>k;
        cout<<checkPrime(a,b,k);
}
    return 0;
}
