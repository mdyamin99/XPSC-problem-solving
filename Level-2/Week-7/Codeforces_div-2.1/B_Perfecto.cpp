#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

bool ok(ll n){
    ll x=sqrt(n);
    return x*x==n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll mx=(n*(n+1)/2);
        if(ok(mx)){
            cout<<"-1"<<endl;
            continue;
        }
        set<int,greater<int>> st;
        for(int i=1;i<=n;i++){
            st.insert(i);
        }
        vector<int> pre;
        ll sum=0;
        while(!st.empty()){
            for(auto val:st){
                if(!ok(sum+val)){
                    sum+=val;
                    pre.push_back(val);
                    st.erase(val);
                    break;
                }
            }
        }
        for(int i=0;i<pre.size();i++){
            cout<<pre[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}