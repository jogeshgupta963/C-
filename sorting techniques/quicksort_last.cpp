#include <iostream>
#include <vector>
using namespace std;

int partitionIndex(vector<int> &v, int low, int high)
{
    int pivot = v[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (v[j] <= pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return i + 1;
}

void quicksort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(v, low, high);
        quicksort(v, low, partitionIndex - 1);
        quicksort(v, partitionIndex + 1, high);
    }
}

int main()
{

    vector<int> v(0, n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    quicksort(v, 0, n);
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << v[i];
    return 0;
}