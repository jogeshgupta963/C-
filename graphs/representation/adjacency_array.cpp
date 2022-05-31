#include <iostream>
#include <vector>
#define rep(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));

    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        v[a][b] = 1;
        v[b][a] = 1;
    }

    cout << endl;
    rep(i, 1, n + 1)
    {
        int j = 1;
        rep(j, 1, n + 1)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    if (v[3][7])
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}