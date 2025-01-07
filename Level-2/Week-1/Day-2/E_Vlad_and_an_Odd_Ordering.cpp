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
        ll p=(n+1)/2,b=0,c=p;
        while(k>p && p){
            k-=p;
            p=(n-c+1)/2;
            c+=p;
            b++;
        }
        cout<<((1LL<<b)+(k-1)*(1LL<<(b+1)))<<endl;
    }
    return 0;
}