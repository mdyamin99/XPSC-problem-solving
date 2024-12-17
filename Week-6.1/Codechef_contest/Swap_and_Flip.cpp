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
        string s,t;
        cin>>s>>t;
        if(s==t) yes;
        else{
            int s_1=0,t_1=0;
            for(int i=0;i<n;i++){
                if(s[i]=='1') s_1++;
                if(t[i]=='1') t_1++;
            }
            if(abs(s_1-t_1)%2==0) yes;
            else no;
        }
    }
    return 0;
}