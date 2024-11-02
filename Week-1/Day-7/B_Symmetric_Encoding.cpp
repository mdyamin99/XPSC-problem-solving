#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]=1;
        }
        vector<char> v;
        for(auto [x,y]:mp)
        {
            v.push_back(x);
        }
        map<char,char> mpp;
        int l=0,r=v.size()-1;
        while(l<r)
        {
            mpp[v[l]]=v[r];
            mpp[v[r]]=v[l];
            l++;
            r--;
        }
        for(char c:s)
        {
            auto it=mpp.find(c);
            if(it != mpp.end())
            {
                cout<<mpp[c];
            }
            else
            {
                cout<<c;
            }
        }
        cout<<endl;
    }
    return 0;
}