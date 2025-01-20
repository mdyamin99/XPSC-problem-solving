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

    int n;
    cin>>n;
    vector<bool> prime(n+1,true);
    for(int i=2;i*i<=n+1;i++){
        for(int j=i+i;j<=n+1;j+=i){
            prime[j]=false;
        }
    }
    if(n<3) cout<<1<<endl;
    else cout<<2<<endl;
    for(int i=2;i<=n+1;i++){
        if(prime[i]) cout<<1<<" ";
        else cout<<2<<" ";
    }
    cout<<endl;
    return 0;
}