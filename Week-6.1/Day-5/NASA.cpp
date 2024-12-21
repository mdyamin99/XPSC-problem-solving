#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;
const int maxN=(1LL << 15);

bool isPalindrome(int n){
    string s=to_string(n);
    string t=s;
    reverse(all(t));
    return s==t;
}
vector<int> P;
void palindrome(){
    for(int i=0;i<maxN;i++){
        if(isPalindrome(i)){
            P.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    palindrome();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n),cnt(maxN+1);
        for(int i=0;i<n;i++){
            cin>>v[i];
            cnt[v[i]]++;
        }
        ll ans=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<P.size();j++){
                int cur=(v[i]^P[j]);
                ans+=cnt[cur];
            }
        }
        cout<<ans/2<<endl;
    }
    return 0;
}