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

    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        if(s[0]=='1' || s==t) yes;
        else{
            int s_1=-1,t_1=-1;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    s_1=i;
                    break;
                }
            }
            if(s_1==-1) no;
            else{
                bool ok=true;
                for(int i=0;i<n;i++){
                    if(s[i] != t[i]){
                        if(s_1 > i){
                            ok=false;
                            break;
                        }
                    }
                }
                if(ok) yes;
                else no;
            }
        }
    }
    return 0;
}