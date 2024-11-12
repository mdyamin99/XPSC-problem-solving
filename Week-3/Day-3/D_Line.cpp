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
        int n;
        cin>>n;
        string s;
        cin>>s;
        ll total=0,change=0;
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        for(int i=0;i<n;i++){
            ll l=i,r=n-i-1;
            if(s[i]=='L'){
                if(r>l){
                    total+=r;
                    change++;
                    pq.push(r-l);
                }
                else{
                    total+=l;
                }
            }
            else{
                if(l>r){
                    total+=l;
                    change++;
                    pq.push(l-r);
                }
                else{
                    total+=r;
                }
            }
        }
        vector<ll> ans(n+1);
        for(int i=change;i<=n;i++){
            ans[i]=total;
        }
        for(int i=change-1;i>=1;i--){
            ans[i]=(total-=pq.top());
            pq.pop();
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}