#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    map<string,int> mp;
    vector<string> v;
    vector<string> vv;
    while(t--)
    {
        string s;
        cin>>s;
        vv.push_back(s);
    }
    reverse(vv.begin(),vv.end());
    for(int i=0;i<vv.size();i++)
    {
        mp[vv[i]]++;
        if(mp[vv[i]]==1)
        {
            v.push_back(vv[i]);
        }
    }
    for(string s:v)
    {
        cout<<s<<endl;
    }
    return 0;
}