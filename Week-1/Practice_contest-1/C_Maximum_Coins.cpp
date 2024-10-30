#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int v[a];
        for(int i=1;i<=a;i++)
        {
            v[i]=pow(2,i);
        }
        // for(int i=1;i<=a;i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        int win=0,lose=0;
        int x=a-b;
        for(int i=a;i>x;i--)
        {
            win+=v[i];
        }
        for(int i=1;i<=x;i++)
        {
            lose+=v[i];
        }
        cout<<win-lose<<endl;
    }
    return 0;
}