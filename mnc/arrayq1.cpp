/* Given an array of size N.the task is to find the first repeating element in the array of integers.
i.e.an elenent that occurs more than once and whose index of first occurence is smallest

constaraint: 1<=N<=10 raise to 6
             0<=Ai<=10 raise to 6 */

#include<iostream>
using namespace std;
 
int main()
{ 
     int n;
     cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
        cin>>a[i];
        int index[n];
        int number[n];
        int count[n];
      for(int i=0;i<n;)
      {
          if(a[i]=a[i+1])
          {
              number[i]=a[i];
              index[i]=i;
              count[i]=count[i+1]=2;
              i+=2;

          }
          else{
               number[i]=a[i];
              index[i]=i+1;
              count[i]=1;
              i++;
          }
        }
        for(int i=0;i<n;i++){
            cout<<number[i]<<" "<<index[i]<<" "<<count[i]<<endl;
        }
    return 0;
}


