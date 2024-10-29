#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin>>t;
    long long int sum=0;
    long long mn=1e18;
    while(t--)
    {
        long long int n;
        cin>>n;
        sum+=n;
        if(n%2!=0)
        {
            mn=min(mn,n);
        }
    }
    if(mn==1e18 || sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        if(sum%2!=0)
        {
            cout<<sum-mn<<endl;
        }
    }

    return 0;
}