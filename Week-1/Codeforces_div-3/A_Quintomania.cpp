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
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        bool flg=true;
        for(int i=1;i<n;i++)
        {
            if(abs(ar[i-1]-ar[i])!=5 && abs(ar[i-1]-ar[i])!=7)
            {
                flg=false;
                break;
            }

        }
        if(flg)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}