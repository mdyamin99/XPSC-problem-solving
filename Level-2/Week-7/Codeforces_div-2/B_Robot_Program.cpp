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
        vector<ll> pre(n+1);
        if(s[0]=='R') pre[0]=1;
        else pre[0]=-1;
        for(int i=1;i<n;i++){
            ll y;
            if(s[i]=='R') y=1;
            else y=-1;
            pre[i]=pre[i-1]+y;
        }
        ll fst=-100;
        for(int i=0;i<n;i++){
            if(pre[i]+x==0){
                fst=i+1;
                break;
            }
        }
        if(fst==-100 || fst>k){
            cout<<0<<endl;
            continue;
        }
        ll lst=-100;
        for(int i=0;i<n;i++){
            if(pre[i]==0){
                lst=i+1;
                break;
            }
        }
        if(lst==-100){
            cout<<1<<endl;
            continue;
        }
        ll ans=(k-fst)/lst;
        cout<<ans+1<<endl;
    }
    return 0;
}