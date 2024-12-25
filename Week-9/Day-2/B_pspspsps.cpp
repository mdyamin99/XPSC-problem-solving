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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ss=0,pp=0,si=0,pi=-1,idx=0;
        for(auto c:s){
            if(c=='s'){
                ss++;
                si=idx;
            }
            if(c=='p'){
                pp++;
                if(pi==-1){
                    pi=idx;
                }
            }
            idx++;
        }
        if(ss==0 || pp==0) yes;
        else if(si==0 || pi==n-1) yes;
        else no;

    }
    return 0;
}