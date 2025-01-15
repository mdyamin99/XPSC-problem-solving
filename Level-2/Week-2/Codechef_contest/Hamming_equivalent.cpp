#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int ok(int a){
    int cnt=0;
    while(a){
        cnt+=(a&1);
        a>>=1;
    }
    return cnt;
}

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
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            int bt=ok(v[i]);
            mp[bt].push_back(i);
        }
        for(auto& [l,y]:mp){
            vector<int> x;
            for(auto in:y){
                x.push_back(v[in]);
            }
            sort(all(x));
            for(int i=0;i<y.size();i++){
                v[y[i]]=x[i];
            }
        }
        bool flag = true;
        for(int i=1;i<n;i++){
            if(v[i-1]>v[i]) flag=false;
        }
        if(flag) yes;
        else no;
    }
    return 0;
}