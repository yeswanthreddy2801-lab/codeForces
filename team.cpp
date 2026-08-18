#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 1)
            c++;
        if (y == 1)
            c++;
        if (z == 1)
            c++;
        if (c >= 2)
            s++;
    }
    cout << s;
}