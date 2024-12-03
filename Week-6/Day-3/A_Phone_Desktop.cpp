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
        int x,y;
        cin>>x>>y;
        int ans=(y+1)/2,a=0;
        if(y%2==0){
            a=(y/2)*7;
        }
        else{
            a=(y/2)*7+11;
        }
        if(x<=a){
            cout<<ans<<endl;
        }
        else{
            int b=x-a;
            cout<<ans+(b+14)/15<<endl;
        }
    }
    return 0;
}