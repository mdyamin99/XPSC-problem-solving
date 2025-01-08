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

    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    auto ok=[&](ll seconds){
        ll cnt=0;
        for(int i=0;i<n;i++){
            cnt+=(seconds/a[i]);
            if(cnt>=t){
                return true;
            }
        }
        return false;
    };

    ll l=1,r=1e18,mid,ans;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}