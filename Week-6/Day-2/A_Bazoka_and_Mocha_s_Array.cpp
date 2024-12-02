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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        deque<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        deque<int> dq=v;
        sort(all(dq));
        bool flag=false;
        for(int i=0;i<n;i++){
            if(v==dq){
                flag=true;
                break;
            }
            v.push_back(v.front());
            v.pop_front();
        }
        if(flag) yes;
        else no;
    }
    return 0;
}