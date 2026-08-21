#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=n/5;
    if(n%5==0)cout<<x;
    else cout<<x+1;
}