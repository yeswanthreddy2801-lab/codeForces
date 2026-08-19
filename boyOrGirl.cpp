#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    set<char> c;
    for (int i = 0; i < n; i++)
    {
        c.insert(s[i]);
    }
    if (c.size() % 2 != 0)
    {
        cout << "IGNORE HIM!";
    }
    else
        cout << "CHAT WITH HER!";
}