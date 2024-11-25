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
        string s="";
        for(int i=0;i<n;i++){
            s.push_back('B');
            s.push_back('A');
            s.push_back('N');
        }
        int cnt=0;
        if(s.size() % 2==0) cnt=s.size()/2;
        else cnt=(s.size()/2)+1;
        vector<int> A,N;
        for(int i=0;i<cnt;i++){
            if(s[i]=='A') A.push_back(i);
        }
        for(int i=s.size()-1;i>=cnt;i--){
            if(s[i]=='N') N.push_back(i);
        }
        vector<int> ans;
        for(int i=0;i<A.size();i++){
            ans.push_back(A[i]);
            ans.push_back(N[i]);
        }
        cout<<A.size()<<endl;
        print(ans);
    }
    return 0;
}