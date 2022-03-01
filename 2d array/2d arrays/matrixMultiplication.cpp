#include <iostream>
using namespace std;
/*                          
  1 2 3    a b c            1*a + 2*x + 3*l      1*b + 2*y + 3*m    1*c + 2*z + 3*n
  4 5 6    x y z  =======   4*a + 5*x + 6*l      4*b + 5*y + 6*m    4*c + 5*z + 6*n
  7 8 9    l m n            7*a + 8*x + 9*l      7*b + 8*y + 9*m    7*c + 8*z + 9*n

*/
int main()
{
    int n1, m1, n2, m2;
    //matrix 1 input
    cout << "enter no of rows and cols of first matrix: ";
    cin >> n1 >> m1;
    cout << "Enter elements of matrix 1: " << endl;
    int a1[n1][m1];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> a1[i][j];
        }
    }

    //matrix 2 input

    cout << "enter no of rows and cols of sec matrix: ";
    cin >> n2 >> m2;
    cout << "Enter elements of matrix 2: " << endl;
    int a2[n2][m2];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cin >> a2[i][j];
        }
    }

    //multi
    int ans[n1][m2];
    if (m1 == n2)
    {
        int r = 0, c = 0;
        for (int i = 0; i < n1; i++)
        {
            int sum = 0, j = 0;
            for (j = 0; j < m2; j++)
            {
                for (int k = 0; k < m1; k++)
                {
                    ans[i][j] += a1[i][k] * a2[k][j];
                }
            }
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
             cout<< ans[i][j]<<" ";
        }
        cout<<endl;
    }
        return 0;
    }