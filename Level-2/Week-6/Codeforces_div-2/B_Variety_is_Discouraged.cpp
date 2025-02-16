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
        set<int> st;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[v[i]]==1) st.insert(v[i]);
        }
        int l=0,r=0,len=0;
        int left=-1,right=-1;
        while(r<n){
            if(st.count(v[r])==0) l=r+1;
            else{
                int x=r-l+1;
                if(len<x){
                    len=x;
                    left=l;
                    right=r;
                }
            }
            r++;
        }
        if(len==0) cout<<0<<endl;
        else cout<<left+1<<" "<<right+1<<endl;
    }
    return 0;
}