#include <iostream>
using namespace std;

void reverse_an_array(int arr[], int start, int end)
{

    if (start >= end)
    {
        return;
    }

    int temp = arr[end];
    arr[end] = arr[start];
    arr[start] = temp;

    reverse_an_array(arr, start + 1, end - 1);
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverse_an_array(arr, 0, n - 1);
    // rvereseArray(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i];
}