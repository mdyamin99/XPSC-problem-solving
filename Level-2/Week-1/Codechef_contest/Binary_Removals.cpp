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
        ll n,x,k;
        cin>>n>>x>>k;
        string s;
        cin>>s;
        ll cnt1=0,cnt0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt1++;
            else cnt0+=cnt1;
        }
        if(cnt0<=x && cnt0%k==0) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}