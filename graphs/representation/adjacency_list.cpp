#include <iostream>
#include <vector>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define N 100
using namespace std;

vector<int> v[N];

int main()
{
    int n, m;
    cin >> n >> m;
    // vector<vector<int>> v(n + 1, vector<int>);

    rep(i, 0, m)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    cout << endl;
    rep(i, 1, n + 1)
    {
        cout << i << "->";
        for (int x : v[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}