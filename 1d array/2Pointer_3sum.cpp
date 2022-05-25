#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n, 0);
    bool found = false;

    for (auto &i : v)
    {
        cin >> i;
    }
    int target;
    cin >> target;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int low = i + 1;
        int high = n - 1;

        while (low < high)
        {

            int sum = v[i] + v[low] + v[high];

            if (sum == target)
                found = true;
            if (sum > target)
                low++;
            if (sum < target)
                high--;
        }
    }

    cout << found;
}