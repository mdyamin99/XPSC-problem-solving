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

    string s;
    cin>>s;
    stack<char> st;
    int ans=0;
    for(char c:s){
        if(!st.empty() && st.top()==c){
            st.pop();
            ans++;
        }
        else st.push(c);
    }
    if(ans%2==1) yes;
    else no;
    return 0;
}