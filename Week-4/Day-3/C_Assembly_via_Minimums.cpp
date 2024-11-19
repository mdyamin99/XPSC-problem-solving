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
        vector<int> v(n*(n-1)/2);
        for(int i=0;i<n*(n-1)/2;i++){
            cin>>v[i];
        }
        vector<int> ans;
        sort(all(v));
        int x=n-1,idx=0;
        for(int i=0;i<n-1;i++){
            int mx=1e9,mn;
            for(int j=0;j<x;j++){
                mn=min(v[idx],mx);
                idx++;
            }
            x--;
            ans.push_back(mn);
        }
        ans.push_back(1e9);
        print(ans);
    }
    return 0;
}