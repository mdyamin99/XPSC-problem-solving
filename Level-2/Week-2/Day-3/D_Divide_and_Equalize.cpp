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
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }
      map<int, int> cnt;
      for (int i = 0;i < n;i++) {
         for (int j = 2;j * j <= a[i];j++) {
            if (a[i] % j == 0) {
               while (a[i] % j == 0) {
                  cnt[j]++;
                  a[i] /= j;
               }
            }
         }
         if (a[i] > 1) {
            cnt[a[i]]++;
         }
      }

      bool ok = true;

      for (auto [x, y] : cnt) {
         if (y % n != 0) {
            ok = false;
            break;
         }
      }

      if (ok) {
         cout << "YES" << '\n';
      }
      else {
         cout << "NO" << '\n';
      }
   }
    return 0;
}