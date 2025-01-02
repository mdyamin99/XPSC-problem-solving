#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(all(v),greater<int>());
        vector<ll> pre(n);
        pre[0]=v[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+v[i];
        }
        while(q--){
            int x;
            cin>>x;
            int l=0,r=n-1;
            int ans=-1;
            while(l<=r){
                int mid=(r+l)/2;
                if(pre[mid]>=x){
                    ans=mid+1;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}