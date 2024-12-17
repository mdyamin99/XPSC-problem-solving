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
        reverse(all(s));
        for(int i=0;i<s.size();i++){
            if(s[i]=='p') s[i]='q';
            else if(s[i]=='q') s[i]='p';
        }
        cout<<s<<endl;
    }
    return 0;
}