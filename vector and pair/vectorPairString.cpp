#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v(8, 0);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    string str = "codeleet";
    vector<pair<int, int>> v1;

    for (int i = 0; i < v.size(); i++)
    {
        v1.push_back(make_pair(v[i], i));
    }

    sort(v1.begin(), v1.end());

    for (int i = 0; i < v.size(); i++)
        cout << v1[i].first << " " << v1[i].second << endl;

    string s;
    for (int i = 0; i < str.length(); i++)
    {
        s += str[v1[i].second];
        cout << str[v1[i].second] << " ";
    }

    cout << s;
}