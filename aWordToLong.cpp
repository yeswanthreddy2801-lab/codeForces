#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v;
    vector<string> ans;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i].length() <= 10)
        {
            ans.push_back(v[i]);
        }
        else
        {
            string an = "";
            an += v[i][0];
            an += to_string(v[i].length() - 2);
            an += v[i][v[i].length() - 1];
            ans.push_back(an);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
}