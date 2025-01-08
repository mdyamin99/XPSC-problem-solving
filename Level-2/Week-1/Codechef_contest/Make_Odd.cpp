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
        string s1,s2;
        cin>>s1>>s2;
        int cnt0=0,cnt1=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='1' && s2[i]=='1') cnt1++;
            else if(s1[i]=='1' && s2[i]=='0') cnt0++;
            else if(s1[i]=='0' && s2[i]=='1') cnt0++;
        }
        if(cnt1%2==1) yes;
        else{
            if(cnt0>0) yes;
            else no;
        }
        
    }
    return 0;
}