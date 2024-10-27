#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0,r=n-1;
    int x=0;
    long long int sum1=0,sum2=0;
    while(l<=r)
    {
        if(x%2==0)
        {
            if(v[l]>v[r])
            {
                sum1+=v[l];
                l++;
            }
            else
            {
                sum1+=v[r];
                r--;
            }
        }
        else
        {
            if(v[l]>v[r])
            {
                sum2+=v[l];
                l++;
            }
            else
            {
                sum2+=v[r];
                r--;
            }
        }
        x++;
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}