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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag=false;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(v[n-1]==v[i]) cnt2++;
        }
        if(v[0]==v[n-1]){
            if(cnt2>=k){
                yes;
                continue;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(v[0]==v[i]) cnt++;
            if(v[n-1]==v[i]) cnt2--;
            if(cnt>=k && cnt2>=k){
                flag=true;
                break;
            }
        }
        if(flag) yes;
        else no;
    }
    return 0;
}