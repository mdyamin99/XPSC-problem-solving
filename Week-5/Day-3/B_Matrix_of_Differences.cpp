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
        int x=1,y=n*n;
        vector<int> v;
        int cnt=0;
        for(int i=0;i<n*n;i++){
            if(i%2==0){
                v.push_back(x);
                x++;
            }
            else{
                v.push_back(y);
                y--;
            }
            if(v.size()==n){
                if(cnt%2==0){
                    print(v);
                    v.clear();
                    cnt++;
                }
                else{
                    reverse(all(v));
                    print(v);
                    v.clear();
                    cnt++;
                }
            }
        }
        // print(v);
    }
    return 0;
}