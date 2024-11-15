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

    int n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    ll l=0,r=0;
    vector<ll> v;
    while(n>l && m>r){
        if(a[l]<=b[r]){
            v.push_back(a[l]);
            l++;
        }
        else{
            v.push_back(b[r]);
            r++;
        }
    }
    while(r<m){
        v.push_back(b[r]);
        r++;
    }
    while(l<n){
        v.push_back(a[l]);
        l++;
    }
    print(v);
    return 0;
}