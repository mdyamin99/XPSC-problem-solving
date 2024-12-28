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

    ll l,r;
    cin>>l>>r;
    yes;
    for(ll i=l;i<r+1;i+=2){
        cout<<i<<" "<<i+1<<endl;
    }
    return 0;
}