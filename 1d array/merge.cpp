#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int c[], int n, int m)
{
    // int c[n + m];
    int p1 = 0;
    int p2 = 0;
    int i = 0;
    while (p1 < n && p2 < m)
    {
        if (arr1[p1] < arr2[p2])
        {
            c[i] = arr1[p1];
            p1++;
            i++;
        }
        else
        {
            c[i] = arr2[p2];
            p2++;
            i++;
        }
    }
    while (i < n)
    {
        c[i] = arr1[p1];
        p1++;
        i++;
    }
    while (i < m)
    {
        c[i] = arr2[p2];
        p2++;
        i++;
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    int arr[m + n];
    merge(arr1, arr2, arr, n, m);
    for (int j = 0; j < m + n; j++)
        cout << arr[j];
    return 0;
}