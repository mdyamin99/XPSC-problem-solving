#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;
const int X=1e6+9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<bool> prime(X,true);
    for(int i=2;i*i<=X;i++){
        if(prime[i]){
            for(int j=i+i;j<=X;j+=i){
                prime[j]=false;
            }
        }
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a=n+1;
        for(int i=a;i<=X;i++){
            if(prime[i]){
                a=i;
                break;
            }
        }
        ll b=n+a;
        for(int i=b;i<=X;i++){
            if(prime[i]){
                b=i;
                break;
            }
        }
        cout<<a*b<<endl;
    }
    return 0;
}