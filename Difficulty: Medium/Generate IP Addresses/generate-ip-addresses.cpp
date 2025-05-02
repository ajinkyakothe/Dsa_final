//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

/*complete the Function*/

class Solution {
    public: 
    
    bool isValid(string s) {
    if (s.empty() || (s.size() > 1 && s[0] == '0')) return false;
    int val = stoi(s);
    return val >= 0 && val <= 255;
   }

    
    
    void solve(string &s,int ind,int dots,string curr,vector<string>&ans){
        if(dots==3)
        {
            string rem=s.substr(ind);
            if (isValid(rem)) {
            ans.push_back(curr + rem);
            }
            return;
        }
        
        for(int len=1;len<=3 && ind+len<s.size(); ++len)
        {
            string part=s.substr(ind,len);
            if(isValid(part))
            {
                solve(s,ind+len,dots+1,curr+part+".",ans);
            }
        }
        
        
    }
    
    
    
    vector<string> generateIp(string s) {
      vector<string> ans;
       //if the length of the string is greater than 4 and less than 12 then  it is return ans;
    if (s.size() < 4 || s.size() > 12) return ans;
    solve(s, 0, 0, "", ans);
    return ans;  
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.generateIp(s);
        sort(str.begin(), str.end());
        if (str.size() == 0)
            cout << -1 << "\n";
        else {
            for (auto &u : str) {
                cout << u << "\n";
            }
        }

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends