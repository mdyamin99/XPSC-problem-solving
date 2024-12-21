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
        ll sum_e=0,sum_o=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i%2==1){
                sum_e+=x;
            }
            else{
                sum_o+=x;
            }
        }
        int E=n/2;
        int O=n-(n/2);
        if((sum_e%E) != 0 || (sum_o%O) != 0) no;
        else if((sum_e/E)==(sum_o/O)) yes;
        else no;
    }
    return 0;
}