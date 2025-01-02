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

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(!mp.count(v[i])) mp[v[i]]=i+1;
    }
    while(k--){
        int x;
        cin>>x;
        int l=0,r=n-1;
        int ans=0;
        while(l<=r){
            int mid=(r+l)/2;
            if(v[mid]>=x){
                ans=mp[v[mid]];
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(ans==0) cout<<n+1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}