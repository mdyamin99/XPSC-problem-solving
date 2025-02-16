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
        string a,b;
        cin>>a>>b;
        string ans="";
        for(int i=0;i<a.size()-1;i++){
            for(int j=0;j<b.size()-1;j++){
                if(a[i]==b[j] && a[i+1]==b[j+1]){
                    ans.push_back(a[i]);
                    ans.push_back(b[j+1]);
                    break;
                }
            }
            if(!ans.empty()) break;
        }
        if(!ans.empty()){
            yes;
            cout<<'*'<<ans<<'*'<<endl;
        }
        else{
            if(a[0]==b[0]){
                yes;
                cout<<a[0]<<'*'<<endl;
            }
            else if(a[a.size()-1]==b[b.size()-1]){
                yes;
                cout<<'*'<<a[a.size()-1]<<endl;
            }
            else no;
        }
    }
    return 0;
}