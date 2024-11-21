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

    ll n,c;
    cin>>n>>c;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0,r=0,ans=0;
    ll sum=0;
    while(n>r){
        sum+=v[r];
        if(sum<=c){
            ans+=(r-l+1);
        }
        else{
           while(sum>c && l<=r){
            sum-=v[l];
            l++;
           }
           if(sum <= c){
            ans+=(r-l+1);
           }
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}