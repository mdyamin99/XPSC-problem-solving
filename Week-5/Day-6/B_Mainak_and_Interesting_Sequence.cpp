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
        int n,m;
        cin>>n>>m;
        if(n>m){
            no;
        }
        else{
            if(n%2==0 && m%2==0){
                yes;
                int sum=0;
                for(int i=1;i<=n-2;i++){
                    cout<<'1'<<" ";
                    sum++;
                }
                cout<<(m-sum)/2<<" "<<(m-sum)/2<<endl;
            }
            else if(n%2==1 && m%2==1){
                yes;
                int sum=0;
                for(int i=1;i<=n-1;i++){
                    cout<<'1'<<" ";
                    sum++;
                }
                cout<<m-sum<<endl;
            }
            else if(n%2==1 && m%2==0){
                yes;
                int sum=0;
                for(int i=1;i<=n-1;i++){
                    cout<<'1'<<" ";
                    sum++;
                }
                cout<<m-sum<<endl;
            }
            else no;
        }
    }
    return 0;
}