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
        int r=0;
        bool flg1=false,flg0=false;
        int cnt1=0,cnt0=0;
        while(n>r){
            if(s[r]=='1'){
                flg1=true;
            }
            else{
                flg0=true;
            }
            if(flg1==true && (s[r]=='0' || r==n-1)){
                cnt1++;
                flg1=false;
            }
            if(flg0==true && (s[r]=='1' || r==n-1)){
                cnt0++;
                flg0=false;
            }
            r++;
        }
        cout<<min(cnt0,cnt1)<<endl;
    }
    return 0;
}