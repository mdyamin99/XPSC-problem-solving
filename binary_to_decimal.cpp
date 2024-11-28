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

    ll n;
    cin>>n;
    int ans=0,idx=0;
    while(n!=0){
        ans+=pow(2,idx)*(n%10);
        idx++;
        n/=10;
    }
    cout<<ans<<endl;
    return 0;
}