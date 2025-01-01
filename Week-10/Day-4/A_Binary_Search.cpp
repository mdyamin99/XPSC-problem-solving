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

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    while(k--){
        int x;
        cin>>x;
        int l=0,r=n-1;
        bool flag = false;
        while(l<=r){
            int mid=(r+l)/2;
            if(v[mid]==x){
                flag=true;
                break;
            }
            if(x>v[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(flag) yes;
        else no;
    }
    return 0;
}