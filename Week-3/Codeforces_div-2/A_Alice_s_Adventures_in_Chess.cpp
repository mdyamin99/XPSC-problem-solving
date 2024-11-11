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
        string s;
        cin>>s;
        ll x=0,y=0;
        for(int j=0;j<10000;j++){
            for(int i=0;i<n;i++){
                if(s[i]=='N'){
                    y++;
                }
                else if(s[i]=='E'){
                    x++;
                }
                else if(s[i]=='S'){
                    y--;
                }
                else{
                    x--;
                }
                if(x==a && y==b) break;
            }
            if(x==a && y==b) break;
        }
        if(x==a && y==b){
            yes;
        }
        else{
            no;
        }
    }
    return 0;
}