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
        for(int i=n-k;i<=n;i++){
            cout<<i<<" ";
        }
        for(int i=n-k-1;i>=1;i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}