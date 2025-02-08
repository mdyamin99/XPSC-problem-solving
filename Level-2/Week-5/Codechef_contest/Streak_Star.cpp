#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int ok(vector<int>& v,int n){
    int ans=1,cnt=1;
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]){
            cnt++;
        }
        else{
            ans=max(ans,cnt);
            cnt=1;
            // cout<<cnt<<endl;
        }
    }
    ans=max(ans,cnt);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        // print(v);
        
        // cout<<ans<<endl;
        int ans=ok(v,n);
        for(int i=0;i<n;i++){
            int og_val=v[i];
            v[i]=v[i]*x;
            int sf=ok(v,n);
            v[i]=og_val;
            ans=max(ans,sf);
        }
        cout<<ans<<endl;
    }
    return 0;
}