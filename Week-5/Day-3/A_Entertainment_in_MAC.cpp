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
        string s1=s;
        reverse(all(s1));
        bool flag=false;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]==s1[i]) continue;
            if(s[i]>s1[i]){
                flag=true;
            }
            else break;
        }
        if(flag) cout<<s1<<s<<endl;
        else cout<<s<<endl;
    }
    return 0;
}