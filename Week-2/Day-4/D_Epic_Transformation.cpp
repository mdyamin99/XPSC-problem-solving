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
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for(auto [x,y]:mp)
        {
            pq.push(y);
        }
        while(!pq.empty())
        {
            if(pq.size()<2)
            {
                break;
            }
            int f=pq.top();
            pq.pop();
            int l=pq.top();
            pq.pop();
            f--;
            l--;
            if(f>=1)
            {
                pq.push(f);
            }
            if(l>=1)
            {
                pq.push(l);
            }
        }
        int ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}