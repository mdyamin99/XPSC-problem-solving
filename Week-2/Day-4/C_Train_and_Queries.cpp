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
        map<int,set<int>> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        while(k--)
        {
            int a,b;
            cin>>a>>b;
            if((mp.find(a)==mp.end()) || (mp.find(b)==mp.end()))
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int l,r;
                l=*mp[a].begin();
                r=*mp[b].rbegin();
                if(l<r)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}