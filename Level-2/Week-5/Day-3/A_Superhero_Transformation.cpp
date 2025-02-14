#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;
    if(a.size()!=b.size()) no;
    else{
        set<char> st={'a','e','i','o','u'};
        bool flag=true;
        for(int i=0;i<a.size();i++){
            if(st.count(a[i]) && !st.count(b[i])){
                flag=false;
                break;
            }
            else if(!st.count(a[i]) && st.count(b[i])){
                flag=false;
                break;
            }
        }
        if(flag) yes;
        else no;
    }
    return 0;
}