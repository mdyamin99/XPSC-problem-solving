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
        char a;
        cin>>n>>a;
        string s;
        cin>>s;
        s+=s;
        bool flag=false;
        int cnt=0,res=0;
        if(a=='g'){
            cout<<'0'<<endl;
        }
        else{
            for(int i=0;i<s.size();i++){
                if(s[i]==a && flag==false){
                    cnt=0;
                    flag=true;
                }
                if(s[i]=='g'){
                    res=max(res,cnt);
                    flag=false;
                }
                if(flag) cnt++;
            }
            cout<<res<<endl;
        }
    }
    return 0;
}