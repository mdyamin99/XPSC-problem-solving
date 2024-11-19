#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        
        int cnt_s=0,cnt_t=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a') cnt_s++;
        }
        for(int i=0;i<m;i++){
            if(t[i]=='a') cnt_t++;
        }
        if(s==t){
            yes;
        }
        else if(cnt_s != cnt_t){
            no;
        }
        else{
            int b_s=0,b_t=0;
            for(int i=0;i<n;i++){
                if(s[i]=='a') break;
                b_s++;
            }
            for(int i=0;i<m;i++){
                if(t[i]=='a') break;
                b_t++;
            }
            if(b_s==b_t) yes;
            else no;
        }
    }
    return 0;
}