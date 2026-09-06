#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    // cout<<s;
    set<char>se;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            se.insert(s[i]);
        }
    }
    cout<<se.size();
}