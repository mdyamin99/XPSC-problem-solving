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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int cnt=0;
        for(auto [x,y]:mp)
        {
            if(y%2 != 0)
            {
                cnt++;
            }
        }
        cnt=cnt-k;
        if(cnt<0)
        {
            cnt=0;
        }
        if(cnt <=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}