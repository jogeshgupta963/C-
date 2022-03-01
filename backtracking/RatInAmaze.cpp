#include<iostream>
using namespace std;

 //Rat in a maze question 

 bool availability(int** arr,int x,int y,int n)  //tells whether the rat can move further or not
{
        //x,y are cordinates and n is size of array

        if(x<n && y<n && arr[x][y]==1)
        {
            return true;
        }
        return false;
}

bool maze(int** arr,int x,int y,int n,int** sol) //sol is soln array
{

    if(x==n-1 && y==n-1)
    {
        sol[x][y]=1;
        return true;
    }


    if(availability(arr,x,y,n))
    {
        sol[x][y]=1;
        if( maze(arr,x+1,y,n,sol) )
        {
            return true;
        }
        if( maze(arr,x,y+1,n,sol) )
        {
            return true;
        }
        sol[x][y]=0;  //backtracking
        return false;
        
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    
    //dynamic allocation for input arr
    int** arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }

    //inputing an aray
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    //dynamically allocating sol array

    int** sol=new int*[n];
    for(int i=0;i<n;i++){
       arr[i]=new int[n];
    for(int j=0;j<n;j++)
       arr[i][j]=0;
    }

    if( maze(arr,0,0,n,sol) )
    {

        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
          {cout<<sol[i][j]<<" ";}
          cout<<endl;
         }
    }
    return 0;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

// 1 represents that the rat can move there while 0 represents obstruction