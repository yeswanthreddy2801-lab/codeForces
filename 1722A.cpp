#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>ans;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        if(s=="Timur" || s=="miurT" || s=="Trumi" || s=="mriTu" || s=="iTmur" || s=="imTur" 4)
        {
            ans.push_back("YES");
        }
        else ans.push_back("NO");
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
}