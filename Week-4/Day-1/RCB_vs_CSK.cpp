#include<iostream>
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

    int x,y;
    cin>>x>>y;
    if((x-y)>=18){
        cout<<"RCB"<<endl;
    }
    else{
        cout<<"CSK"<<endl;
    }
    return 0;
}