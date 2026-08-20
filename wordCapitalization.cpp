#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char x=s[0];
    if(x>='a' && x<='z')
    {
        x-=('a'-'A');
        s[0]=x;
    }
    cout<<s;
    

}
