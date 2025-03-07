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
        if(n==1) cout<<1<<endl<<1<<endl;
        else if(k==1 || k==n) cout<<-1<<endl;
        else{
            int p1=k-1,p2=k+1;
            if(p1%2==0){
                p1--;
                p2++;
            }
            cout<<3<<endl;
            cout<<1<<" "<<p1+1<<" "<<p2<<endl;
        }
    }
    return 0;
}