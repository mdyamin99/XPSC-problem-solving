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
        ll a,b,c;
        cin>>a>>b>>c;
        if(c<b){
            if(a<b) cout<<'1'<<endl;
            else if(b<a) cout<<'2'<<endl;
            else cout<<'3'<<endl;
        }
        else{
            ll x=(c-b)+c;
            if(a<x) cout<<'1'<<endl;
            else if(x<a) cout<<'2'<<endl;
            else cout<<'3'<<endl;
        }
    }
    return 0;
}