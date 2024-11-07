#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(i!=x && (i+x)%2==0)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}