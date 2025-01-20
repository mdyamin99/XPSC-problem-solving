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
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag=true;
        for(int i=1;i<n;i++){
            if(v[i-1]>v[i]){
                flag=false;
                break;
            }
            else{
                v[i]-=v[i-1];
                v[i-1]=0;
            }
        }
        if(flag) yes;
        else no;
    }
    return 0;
}