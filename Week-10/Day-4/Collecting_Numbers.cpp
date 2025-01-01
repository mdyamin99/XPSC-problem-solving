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

    int n;
    cin>>n;
    vector<int> v(n),pos(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
        pos[v[i]]=i;
    }
    int pas=1;
    for(int i=1;i<n;i++){
        if(pos[i]<pos[i-1]){
            pas++;
        }
    }
    cout<<pas<<endl;
    return 0;
}