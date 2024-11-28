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

    int x,y,z;
    cin>>x>>y>>z;
    if(y*z>x) cout<<"-1"<<endl;
    else cout<<x-(y*z)<<endl;
    return 0;
}