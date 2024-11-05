#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    multiset<int> ml;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ml.insert(x);
    }
    int problem=1;
    while(true)
    {
        auto it=ml.lower_bound(problem);
        if(it != ml.end())
        {
            problem++;
            ml.erase(it);
        }
        else
        {
            break;
        }
    }
    cout<<problem-1<<endl;
    return 0;
}