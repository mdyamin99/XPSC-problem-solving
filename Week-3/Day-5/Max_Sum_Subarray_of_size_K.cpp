//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        int l=0,r=k-1;
        int cnt=0;
        long long ans=0;
        long long sum=0;
        while(true){
            if(cnt!=r+1){
                sum+=arr[cnt];
                cnt++;
            }
            else{
                l++;
                cnt=l;
                r++;
                ans=max(sum,ans);
                sum=0;
            }
            if(arr.size()==r) break;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        long long ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends