#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define print(v) for(auto data : v) cout<<data<<" "; cout<<endl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        map<int, set<int>> g;
        for (int i = 1;i <= m;i++) {
            int u, v;
            cin >> u >> v;
            g[u].insert(v);
            g[v].insert(u);
        }

        int leaf = -1, parentOfLeaf = -1;
        for (int i = 1;i <= n;i++) {
            if (g[i].size() == 1) {
                leaf = i;
                break;
            }
        }

        int x, y;
        for (int i = 1;i <= n;i++) {
            if (g[i].find(leaf) != g[i].end()) {
                y = g[i].size() - 1;
                parentOfLeaf = i;
                break;
            }
        }

        for (int i = 1;i <= n;i++) {
            if (g[i].find(parentOfLeaf) != g[i].end() && g[i].size() > 1) {
                x = g[i].size();
                break;
            }
        }

        cout << x << " " << y << '\n';
    }
    return 0;
}