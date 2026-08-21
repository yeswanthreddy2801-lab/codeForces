#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int c=0;
    while(n<=m)
    {
        n*=3;
        m*=2;
        c++;
    }
    cout<<c;
}