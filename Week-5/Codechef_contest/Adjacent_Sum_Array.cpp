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
        int n;
        cin>>n;
        vector<ll> v(n-1);
        for(int i=0;i<n-1;i++){
            cin>>v[i];
        }
        sort(all(v));
        vector<ll> ans(n);
        ans[0]=v[0]-1,ans[1]=1;
        for(int i=2;i<n;i++){
            ans[i]=abs(ans[i-1]-v[i-1]);
        }
        print(ans);
    }
    return 0;
}