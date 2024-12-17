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
        int n,k,p;
        cin>>n>>k>>p;
        vector<int> v(n);
        ll sum=0;
        int mx=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            mx=max(mx,v[i]);
        }
        if(k+mx>(p+sum)-mx){
            cout<<"Ved"<<endl;
        }
        else if(k+mx<(p+sum)-mx){
            cout<<"Varun"<<endl;
        }
        else cout<<"Equal"<<endl;
    }
    return 0;
}