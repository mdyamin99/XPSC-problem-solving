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
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i] == s[i+1]){
                ans=1;
                break;
            }
        }
        if(s.size()>=2 && ans==1) cout<<ans<<endl;
        else cout<<s.size()<<endl;
        
    }
    return 0;
}