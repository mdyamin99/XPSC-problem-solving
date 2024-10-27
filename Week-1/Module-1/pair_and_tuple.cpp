#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int n;
    // cin>>n;
    // pair<string,int> student[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>student[i].first>>student[i].second;
    // }
    // for(auto [x,y]:student)
    // {
    //     cout<<x<<" "<<y<<endl;
    // }


    // tuple<string,int,string> t={"karim",10,"01724"};
    // cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;
    // auto [X,Y,Z]=t;
    // cout<<X<<" "<<Y<<" "<<Z<<endl;


    pair<string,pair<int,string>> p={"Karim",{10,"01724"}};

    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

    return 0;
}