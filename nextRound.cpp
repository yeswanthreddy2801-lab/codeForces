#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    m = v[m - 1];

    for (int i = 0; i < n; i++)
    {
        if (v[i] >= m && v[i]>0)
        {
            ans++;
        }
    }
    cout << ans;
}