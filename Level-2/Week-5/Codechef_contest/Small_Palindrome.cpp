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
        int a,b;
        cin>>a>>b;
        for(int i=0;i<a/2;i++){
            cout<<1;
        }
        for(int i=0;i<b;i++){
            cout<<2;
        }
        for(int i=0;i<a/2;i++){
            cout<<1;
        }
        cout<<endl;
    }
    return 0;
}