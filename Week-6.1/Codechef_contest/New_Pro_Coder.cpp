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

    float a,b;
    cin>>a>>b;
    a/=2;
    if(b>=a) cout<<"NEWBIE"<<endl;
    else cout<<"PRO"<<endl;
    return 0;
}