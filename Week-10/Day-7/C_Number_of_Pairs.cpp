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
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(all(v));
        ll ans=0;
        for(int i=0;i<n;i++){
            int a=l-v[i];
            auto lw=lower_bound(all(v),a);
            int b=r-v[i];
            auto up=upper_bound(all(v),b);
            int dis1=distance(v.begin(),lw);
            if(dis1<=i) dis1=i+1;
            int dis2=distance(v.begin(),up);
            if(dis2<=i) dis2=i+1;
            ans+=dis2-dis1;
        }
        cout<<ans<<endl;
    }
    return 0;
}