#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1 || k==1){
            yes;
            continue;
        }
        vector<ll> v(n+1,0),pre(n+1);
        for(int i=n-k+1;i<=n;i++){
            cin>>v[i];
        }
        for(int i=n;i>=n-k+2;i--){
            pre[i]=(v[i]-v[i-1]);
        }
        bool flag=true;
        for(int i=n-k+2;i<=n;i++){
            if(i+1<=n && pre[i+1]<pre[i]){
                flag=false;
            }
        }
        if(!flag){
            no;
            continue;
        }
        for(int i=n-k+1;i>1;i--){
            pre[i]=pre[i+1];
            v[i-1]=v[i]-pre[i];
        }
        pre[1]=v[1];
        for(int i=1;i<=n;i++){
            if(i+1<=n && pre[i+1]<pre[i]){
                flag=false;
                break;
            }
        }
        if(flag) yes;
        else no;
    }
    return 0;
}