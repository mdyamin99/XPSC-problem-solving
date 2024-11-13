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
        int l=0,r=n-1;
        while(l<r){
            if(s[l]=='1' && s[r]=='0'){
                s[l]='#',s[r]='#';
                l++,r--;
            }
            else if(s[l]=='0' && s[r]=='1'){
                s[l]='#',s[r]='#';
                l++,r--;
            }
            else{
                break;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i] != '#') cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}