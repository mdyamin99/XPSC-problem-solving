//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        int l=0,r=k-1;
        int cnt=0,ans=0;
        vector<int> v;
        while(arr.size()>r){
            if(cnt!=r+1){
                if(arr[cnt]<0){
                    ans=arr[cnt];
                    cnt=r+1;
                    continue;
                }
                cnt++;
            }
            else{
                l++;
                cnt=l;
                r++;
                v.push_back(ans);
                ans=0;
            }
        }
        return v;
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
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends