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
        int tmp=0,zero=0;
        reverse(all(s));
        vector<ll> v1,v2(n,0);
        for(int i=0;i<n;i++){
            if(s[i]!='0') tmp=-1;
            else{
                zero++;
                v1.push_back(i-v1.size());
            }
        }
        // cout<<s<<endl;
        // print(v1);
        for(int i=0;i<v1.size();i++){
            if(i<=0) v2[i]=v1[i];
            else{
                v2[i]=v1[i]+v2[i-1];
            }
        }
        ll p=1;
        bool ok=p<=n;
        while(ok){
            if(zero>=p) cout<<v2[p-1]<<" ";
            else cout<<-1<<" ";
            p++;
            ok=p<=n;
        }
        cout<<endl;
    }
    return 0;
}