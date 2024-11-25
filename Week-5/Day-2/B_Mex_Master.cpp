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
        int zero=0,nonzero=0;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0) zero++;
            else nonzero++;
        }
        if(zero==0){
            cout<<'0'<<endl;
        }
        else{
            if(nonzero>=zero-1){
                cout<<'0'<<endl;
            }
            else{
                int mx=*max_element(v.begin(),v.end());
                if(mx==1){
                    cout<<'2'<<endl;
                }
                else{
                    cout<<'1'<<endl;
                }
            }
        }
    }
    return 0;
}