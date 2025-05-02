//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        
         string ans = "";
    
    for (int i = 0; i < s.size(); i++) {
        // Add the character to the result if it's not the same as the previous one
        if (i == 0 || s[i] != s[i - 1]) {
            ans += s[i];
        }
    }
    
    return ans;
           
            
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsecutiveCharacter(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends