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
        vector<int> v(n-2);
        for(int i=0;i<n-2;i++){
            cin>>v[i];
        }
        if(n==3) yes;
        else{
            bool flag=true;
            for(int i=0;i<n-4;i++){
                if(v[i]==1 && v[i+1]==0 && v[i+2]==1 && i+2<n-2) flag=false;
            }
            if(flag) yes;
            else no;
        }
    }
    return 0;
}