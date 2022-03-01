#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    char a[n+1];char arr[n+1];
    cin>>a;
    arr[n+1]=a[n+1];

    int i=0,j=n-1,fla=0;
    while(a[i] !='\0')
    {
        if(a[i]==a[j]){
        i++;j--;
            
        }
        else{
            fla=1;
            break;
        }
    }
    if(fla==1){cout<<"not";}
    else{cout<<"pal";}
    return 0;
}