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
        int mx=0,ans=0,idx=n-1;
        for(int i=n-2;i>=0;i--){
            if(v[i]<v[idx]){
                ans++;
                mx=max(ans,mx);
            }
            else{
                ans=0;
                idx=i;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}