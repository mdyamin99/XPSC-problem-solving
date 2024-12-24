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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,int> mp;
        vector<int> vv=v;
        sort(all(vv));
        map<int,set<int>> mp2;
        for(int i=0;i<n;i++){
            mp2[i%k].insert(v[i]);
        }
        for(int i=0;i<n;i++){
            auto check = mp2[i%k];
            if(check.find(vv[i])==check.end()){
                mp[i%k]++;
            }
        }
        if(mp.empty()) cout<<"0"<<endl;
        else{
            int cnt=0;
            for(auto [x,y]:mp){
                if(y==1) cnt++;
                else cnt+=100;
            }
            if(cnt==2) cout<<'1'<<endl;
            else cout<<"-1"<<endl;
        }
    }
    return 0;
}