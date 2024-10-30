#include<iostream>
#include<vector>
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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int sum=0,len=0,ans=0;
        for(int i=0;i<n;i++)
        {
            len=0;
            sum=0;
            for(int j=i;j<n;j++)
            {
                len++;
                sum+=v[j];
                if(sum%2==0)
                {
                    ans=max(ans,len);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}