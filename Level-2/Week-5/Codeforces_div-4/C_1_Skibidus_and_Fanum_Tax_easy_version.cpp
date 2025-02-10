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
        int n,m;
        cin>>n>>m;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int x;
        cin>>x;
        bool flag =true;
        int l=min(v[0],x-v[0]);
        for(int i=1;i<n;i++){
            int cr=v[i];
            vector<ll> ok;
            if(cr>=l) ok.push_back(cr);
            if(x-cr>=l) ok.push_back(x-cr);
            if(ok.empty()){
                flag=false;
                break;
            }
            l=*min_element(all(ok));
        }
        if(flag) yes;
        else no;
    }
    return 0;
}