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
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        bool flag = true;
        int z_cnt=-1;
        map<int,int> mp;
        int x=-1;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                flag = false;
            }
            else{
                if(b[i]==0){
                    z_cnt=max(z_cnt,a[i]);
                }
                else{
                    mp[a[i]-b[i]]++;
                    x=a[i]-b[i];
                }
            }
        }
        if(mp.size()>1) flag = false;
        if(x != -1 && x<z_cnt) flag = false;
        if(flag) yes;
        else no;
    }
    return 0;
}