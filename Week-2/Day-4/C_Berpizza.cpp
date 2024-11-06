#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    set<pair<int,int>> st;
    multiset<pair<int,int>> ml;
    int pos=1;
    vector<int> v;
    while(t--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int money;
            cin>>money;
            st.insert({pos,money});
            ml.insert({money,-pos});
            pos++;
        }
        else if(type==2)
        {
            int pos=st.begin()->first,money=st.begin()->second;
            v.push_back(pos);
            st.erase(st.begin());
            ml.erase({money,-pos});
        }
        else
        {
            int pos=-ml.rbegin()->second,money=ml.rbegin()->first;
            v.push_back(pos);
            ml.erase(--ml.end());
            st.erase({pos,money});
        }
    }
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}