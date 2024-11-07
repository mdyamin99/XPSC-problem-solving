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
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        set<int> st;
        for(int i=1;i<=n;i++){
            st.insert(v[i]);
        }
        int l=*st.begin(),r=*st.rbegin();
        int left=1,right=n;
        while(true){
            bool flg=false;
            if(v[left]==l){
                l++;
                left++;
                flg=true;
            }
            else if(v[left]==r){
                r--;
                left++;
                flg=true;
            }
            if(v[right]==l){
                l++;
                right--;
                flg=true;
            }
            else if(v[right]==r){
                r--;
                right--;
                flg=true;
            }
            if(left>right || flg==false) break;
        }
        if(left<right) cout<<left<<" "<<right<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}