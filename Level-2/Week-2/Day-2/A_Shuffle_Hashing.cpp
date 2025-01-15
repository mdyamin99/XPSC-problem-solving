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
        string p,h;
        cin>>p>>h;
        sort(all(p));
        bool flag=false;
        int n=p.size(),n2=h.size();
        for(int i=0;i<=n2-n;i++){
            string s=h.substr(i,n);
            sort(all(s));
            if(s==p){
                flag=true;
                break;
            }
        }
        if(flag) yes;
        else no;
    }
    return 0;
}