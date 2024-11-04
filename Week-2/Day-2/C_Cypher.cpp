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
        vector<int> ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        vector<int> v;
        int cnt=0;
        while(n--)
        {
            int a;
            string s;
            cin>>a>>s;
            reverse(s.begin(),s.end());
            int sum=ar[cnt];
            for(int j=0;j<a;j++)
            {
                if(s[j]=='U')
                {
                    sum-=1;
                }
                else
                {
                    sum+=1;
                }
                if(sum>9)
                {
                    sum=0;
                }
                else if(sum<0)
                {
                    sum=9;
                }
            }
            v.push_back(sum);
            cnt++;
        }
        for(int val:v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}