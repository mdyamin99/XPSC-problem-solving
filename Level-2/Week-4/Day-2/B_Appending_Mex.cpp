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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mex=v[0];
    bool flag=true;
    for(int i=0;i<n;i++){
        if(v[i]>mex+1 || v[i]>i){
            cout<<i+1<<endl;
            flag=false;
            break;
        }
        if(v[i]>mex) mex=v[i];
    }
    if(flag) cout<<-1<<endl;
    return 0;
}