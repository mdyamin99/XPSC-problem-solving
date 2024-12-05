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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        reverse(all(v));
        while(!v.empty()){
            if(v.back()==0) v.pop_back();
            else break;
        }
        reverse(all(v));
        ll ans=0;
        if(v.empty()) cout<<0<<endl;
        else{
            for(int i=0;i<v.size()-1;i++){
                if(v[i]==0)ans++;
                else ans+=v[i];
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}