#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

bool Prime(ll n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    if(Prime(n)) cout<<"1"<<endl;
    else if(n%2==0) cout<<"2"<<endl;
    else{
        if(Prime(n-2)) cout<<"2"<<endl;
        else cout<<"3"<<endl;
    }
    return 0;
}