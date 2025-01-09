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

    int n, k;
   cin >> n >> k;
   vector<int> a(n);
   for (int i = 0;i < n;i++) {
      cin >> a[i];
   }

   auto ok = [&](int median) {
      long long cnt = 0;
      for (int i = (n / 2);i < n;i++) {
         cnt += (a[i] < median ? (median - a[i]) : 0);
      }
      return cnt <= k;
      };

   sort(a.begin(), a.end());

   int l = 1, r = 2e9, mid, ans;
   while (l <= r) {
      mid = l + (r - l) / 2;
      if (ok(mid)) {
         ans = mid;
         l = mid + 1;
      }
      else {
         r = mid - 1;
      }
   }

   cout << ans << '\n';
    return 0;
}