#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;
const int N=1e6;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<ll> v(N);
    v[0]=1;
    for(int i=1;i<=N;i++){
        v[i]=v[i-1]+i+1;
    }
    // print(v);
    int l=0,r=N-1;
    ll ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]>k){
            int x=n-(mid+1);
            if((v[mid]-x)==k){
                ans=x;
                break;
            }
            else if((v[mid]-x)>k){
                r=mid-1;
            }
            else l=mid+1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
    return 0;
}