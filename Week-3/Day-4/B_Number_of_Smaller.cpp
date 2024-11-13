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

    int n,m;
    cin>>n>>m;
    vector<int> v(n),vv(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>vv[i];
    }
    vector<int> ans;
    int l=0,r=0,cnt=0;
    while(r!=m){
        if(l<n && v[l]<vv[r]){
            l++;
            cnt++;
        }
        else{
            r++;
            ans.push_back(cnt);
        }
    }
    for(auto v:ans){
        cout<<v<<" ";
    }
    return 0;
}