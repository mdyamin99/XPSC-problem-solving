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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(all(v));
        int L=-1,R=-1,l=-1,r;
        for(int i=0;i<n;i++){
            if(mp[v[i]]<k) continue;
            if(l==-1){
                l=v[i];
            }
            if(i==n-1 || v[i+1]-v[i]>1 || mp[v[i+1]]<k){
                r=v[i];
                if(r-l>=R-L){
                    R=r;
                    L=l;
                }
                l=-1,r=-1;
            }
        }
        if(L==-1) cout<<"-1"<<endl;
        else cout<<L<<" "<<R<<endl;
    }
    return 0;
}