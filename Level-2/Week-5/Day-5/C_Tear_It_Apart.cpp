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
        string s;
        cin>>s;
        ll cnt=0,mn=INT_MAX,mx=0;
        for(char i='a';i<='z';i++){
            mx=0,cnt=0;
            for(int j=0;j<s.size();j++){
                if(s[j]!=i){
                    cnt++;
                    if(cnt>mx) mx=cnt;
                }
                else cnt=0;
            }
            if(mx<mn) mn=mx;
        }
        if(mn==0) cout<<0<<endl;
        else{
            cnt=0;
            while(mn!=1){
                mn/=2;
                cnt++;
            }
            cout<<cnt+mn<<endl;
        }
    }
    return 0;
}