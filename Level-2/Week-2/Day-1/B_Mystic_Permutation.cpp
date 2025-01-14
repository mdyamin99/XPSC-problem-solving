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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]=1;
        }
        if(n==1) cout<<"-1"<<endl;
        else{
            vector<int> ans(n,0);
            for(int i=0;i<n;i++){
                for(auto [x,y]:mp){
                    if(v[i]!=x && mp[x]==1){
                        ans[i]=x;
                        mp[x]++;
                        break;
                    }
                }
            }
            if(ans[n-1]==0){
                ans[n-1]=ans[n-2];
                ans[n-2]=v[n-1];
            }
            print(ans);
        }
    }
    return 0;
}