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

    int n;
    cin>>n;
    vector<int> v(n);
    bool flg=false;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<(1<<n);i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if((i>>j)&1){
                sum+=v[j];
            }
            else sum-=v[j];
        }
        if(sum%360==0){
            flg=true;
            break;
        }
    }
    if(flg==true) yes;
    else no;
    return 0;
}