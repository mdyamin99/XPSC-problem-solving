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
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> v;
        v.push_back(a);
        int x=n;
        for(int i=2;i<=n/2;i++){
            while(x==a || x==b){
                x--;
            }
            v.push_back(x);
            x--;
        }
        x=1;
        for(int i=n/2+1;i<=n;i++){
            while(x==a || x==b){
                x++;
            }
            v.push_back(x);
            x++;
        }
        v[n-1]=b;
        bool flg=false;
        for(int i=0;i<n/2;i++){
            if(v[i]<a){
                flg=true;
                break;
            }
        }
        for(int i=n/2;i<n;i++){
            if(v[i]>b){
                flg=true;
                break;
            }
        }
        if(flg) cout<<-1;
        else print(v);
    }
    return 0;
}