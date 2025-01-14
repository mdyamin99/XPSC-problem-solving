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
        ll one=0,zero=0;
        while(n--){
            int x;
            cin>>x;
            if(x==1) one++;
            else if(x==0) zero++;
        }
        ll ans=pow(2,zero);
        cout<<one*ans<<endl;
    }
    return 0;
}