#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>v(4,0);
    int i=0;
    while(n!=0)
    {
        v[i]=n%10;
        i++;
        n/=10;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<4;i++)
    {
        cout<<v[i];
    }
    return 0;
}