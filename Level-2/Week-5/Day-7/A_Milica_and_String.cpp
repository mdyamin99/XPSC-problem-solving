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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int b_cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B') b_cnt++;
        }
        if(b_cnt==k) cout<<0<<endl;
        else{
            if(b_cnt<k){
                int cnt=0;
                for(int i=0;i<n;i++){
                    if(s[i]=='A') cnt++;
                    if(cnt==k-b_cnt){
                        cout<<1<<endl<<i+1<<" "<<'B'<<endl;
                        break;
                    }
                }
                
            }
            else{
                int cnt=0;
                for(int i=0;i<n;i++){
                    if(s[i]=='B') cnt++;
                    if(cnt==b_cnt-k){
                        cout<<1<<endl<<i+1<<" "<<'A'<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}