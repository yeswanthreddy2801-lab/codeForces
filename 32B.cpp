#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    string ans="";
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='.')
       ans+='0';
       else if(s[i]=='-' && s[i+1]=='.')
       {
           ans+='1';
           i++;

       }
       else if(s[i]=='-' && s[i+1]=='-')
       {
           ans+='2';
           i++;

       }

    }
  
}