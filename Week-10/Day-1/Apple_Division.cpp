#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

void solve(int i,int n,ll sum1,ll sum2,vector<int>& v,ll &mn){
    if(i==n){
        mn=min(mn,abs(sum1-sum2));
        return;
    }
    solve(i+1,n,sum1+v[i],sum2,v,mn);
    solve(i+1,n,sum1,sum2+v[i],v,mn);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll mn=1e18;
    solve(0,n,0,0,v,mn);
    cout<<mn<<endl;
    return 0;
}