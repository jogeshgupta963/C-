// q)  reduce the array from lowest to highest
// eg. 5 is the lowest and is at position 3 then replace 5 with 0
//  7 is the second lowest and is at position 7 then replace 5 with 1

#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    vector<int> v(8, 0);

    for (auto &i : v)
    {
        int n;
        cin >> n;
        i = n;
    }

    vector<pair<int, int>> v1;

    for (int i = 0; i < v.size(); i++)
    {

        // pair<int,int> p;
        // p.first = v[i];
        // p.second = i;
        // v1.push_back(p);

        v1.push_back(make_pair(v[i], i));
    }
    sort(v1.begin(), v1.end(), compare);

    for (int i = 0; i < v1.size(); i++)
    {

        v[v1[i].second] = i;
    }
    for (int i = 0; i < v1.size(); i++)
    {

        cout << v[i] << " ";
    }
    return 0;
}