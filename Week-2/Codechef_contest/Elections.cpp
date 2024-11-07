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
        int n,x;
        cin>>n>>x;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int cnt=0;
        priority_queue<int,vector<int>,greater<int> > pq;
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                cnt++;
            }
            else
            {
                pq.push((b[i]-a[i])+1);
            }
        }
        while(!pq.empty())
        {
            int val=pq.top();
            pq.pop();
            if(val>x)
            {
                break;
            }
            if(val<=x)
            {
                x-=val;
                cnt++;
            }
        }
        if(cnt>n/2)
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