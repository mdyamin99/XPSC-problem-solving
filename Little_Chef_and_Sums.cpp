#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int> pre(n);
        vector<int> suf(n);
        pre[0]=v[0];
        suf[n-1]=v[n-1];
        for(int i=1;i<n;i++)
        {
            pre[i]=v[i]+pre[i-1];
        }

        for(int i=n-2;i>=0;i--)
        {
            suf[i]=suf[i+1]+v[i];
        }
        int sum=pre[0]+suf[0];
        int index=0;
        for(int i=1;i<n;i++)
        {
            if(pre[i]+suf[i]<sum)
            {
                sum=pre[i]+suf[i];
                index=i;
            }
        }
        cout<<index+1<<endl;
    }
    return 0;
}