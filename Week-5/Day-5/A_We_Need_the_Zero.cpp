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
        int n,XOR=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            XOR^=v[i];
        }
        for(int i=0;i<n;i++){
            v[i]^=XOR;
        }
        int x=0;
        for(int i=0;i<n;i++){
            x^=v[i];
        }
        if(x==0) cout<<XOR<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}