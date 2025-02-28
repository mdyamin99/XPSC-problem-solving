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
        ll n;
        cin>>n;
        ll cnt=0;
        ll block=n/15;
        cnt=block*3;
        for(ll i=0;i<=n%15;i++){
            ll x=i%3,y=i%5;
            if(x==y) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}