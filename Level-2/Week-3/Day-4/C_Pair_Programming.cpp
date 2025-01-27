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
        int k,n,m;
        cin>>k>>n>>m;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int p1=0,p2=0;
        bool flag=true;
        vector<int> ans;
        while(n>p1 || m>p2){
            if(a[p1]==0 && n>p1){
                ans.push_back(a[p1]);
                p1++;
                k++;
            }
            else if(b[p2]==0 && m>p2){
                ans.push_back(b[p2]);
                p2++;
                k++;
            }
            else if(a[p1]<=k && n>p1){
                ans.push_back(a[p1]);
                p1++;
            }
            else if(b[p2]<=k && m>p2){
                ans.push_back(b[p2]);
                p2++;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag==false) cout<<-1;
        else print(ans);
    }
    return 0;
}