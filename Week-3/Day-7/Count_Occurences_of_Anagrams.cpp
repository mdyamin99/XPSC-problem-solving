//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int n=pat.size();
        multiset<char> st1,st2;
        for(int i=0;i<pat.size();i++){
            st1.insert(pat[i]);
        }
        int l=0,r=0,cnt=0;
        while(txt.size()>r){
            st2.insert(txt[r]);
            if(r-l+1==n){
                if(st1==st2){
                    cnt++;
                }
                auto it=st2.find(txt[l]);
                st2.erase(it);
                l++;
            }
            r++;
        }
        return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends