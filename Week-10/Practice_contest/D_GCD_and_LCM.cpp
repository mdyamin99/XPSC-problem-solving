#include<iostream>
#include<algorithm>
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
        ll x,y,k;
        cin>>x>>y>>k;
        for(int i=0;i<k;i++){
            if(x>y) x=__gcd(x,y);
            else y=__gcd(x,y);
            if(x>y) x=((x*y)/__gcd(x,y));
            else y=((x*y)/__gcd(x,y));
            if(x==y) break;
        }
        cout<<x+y<<endl;
    }
    return 0;
}