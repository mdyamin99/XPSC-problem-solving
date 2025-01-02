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
        int ar[n][n];
        for(int i=0;i<n;i++){
            if(i%2==1){
                for(int j=n;j>=1;j--){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
            else{
                for(int k=1;k<=n;k++){
                    cout<<k<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}