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
        int x,n,m;
        cin>>x>>n>>m;
        while(x>0 && (n>0 || m>0)){
            if(x>20 && n>0){
                x=(x/2)+10;
                n--;
            }
            else if(m>0){
                x-=10;
                m--;
            }
            else if(n>0){
                x=(x/2)+10;
                n--;
            }
        }
        if(x<1) yes;
        else no;
    }
    return 0;
}