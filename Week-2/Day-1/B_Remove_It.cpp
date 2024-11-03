#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(ar[i] != x)
        {
            v.push_back(ar[i]);
        }
    }
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}