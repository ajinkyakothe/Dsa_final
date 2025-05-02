//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
    
      vector<vector<string>>ans;
      unordered_map<string,vector<string>>mp;
      
      for(auto str:arr)
      {
          string s=str;
          sort(s.begin(),s.end());
          mp[s].push_back(str);
      }



//with the sorted array:::

 /*
unordered_map<string, vector<string>> mp;
    vector<string> order;  // To maintain insertion order of keys
    for (auto& str : arr) {
        string key = str;
        sort(key.begin(), key.end());
        if (mp.find(key) == mp.end()) {
            order.push_back(key);  // record the first appearance
        }
        mp[key].push_back(str);
    }

    vector<vector<string>> ans;
    for (auto& key : order) {
        ans.push_back(mp[key]);
    }

    return ans;


*/


      
      
      for(auto i:mp)
      {
          ans.push_back(i.second);
      }
      
      return ans;
  
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
