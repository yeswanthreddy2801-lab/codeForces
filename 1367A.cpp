#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        string ans="";
        int m=s.length();
       for(int j=0;j<m-1;j++)
       {
        if(s[j]==s[j+1])
        {
            ans+=s[j];
            j++;
        }
        else {
            ans+=s[j];
            // ans+=s[j+1];
            
        }

       }
       if(s[m-1]!=s[m-2])
       {
        ans+=s[m-1];
       }
       v.push_back(ans);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
}