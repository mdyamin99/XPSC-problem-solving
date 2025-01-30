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
        string tmp="ADVITIYA";
        int ans=0;
        for(int i=0;i<8;i++){
            int cnt=0;
            while(true){
                if(s[i] != tmp[i]){
                    if(s[i]=='Z') s[i]='A';
                    else s[i]=char(int(s[i])+1);
                    cnt++;
                }
                else break;
            }
            ans+=cnt;
        }
        cout<<ans<<endl;
    }
    return 0;
}