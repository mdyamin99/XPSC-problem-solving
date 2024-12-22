#include<iostream>
#include<string>
#include<algorithm>
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
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') cnt++;
        }
        int ans=min(cnt,n-cnt);
        if(ans%2==1) cout<<"Zlatan"<<endl;
        else cout<<"Ramos"<<endl;
    }
    return 0;
}