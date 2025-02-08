#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

ll ok(string a,string b){
    ll i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]==b[j]){
            j++;
        }
        i++;
    }
    if(j<b.size()) return -1;
    ll cst=0;
    vector<int> v;
    i=a.size()-1;
    for(int j=b.size()-1;j>=0;j--){
        while(a[i] != b[j]){
            i--;
        }
        v.push_back(i+1);
        i--;
    }
    ll n=a.size();
    ll t_cst=0;
    for(int i=0;i<v.size();i++){
        t_cst+=v[i];
    }
    ll m=v.size();
    t_cst=m*n+n-m-(m*(m-1))/2-t_cst;
    return t_cst;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        cout<<ok(a,b)<<endl;
    }
    return 0;
}