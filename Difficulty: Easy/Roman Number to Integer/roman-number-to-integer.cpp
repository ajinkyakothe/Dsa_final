//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
      
       unordered_map<char,int>map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        
        int sum=map[str[str.size()-1]];
        for(int i=str.size()-1;i>0;i--){
            if(map[str[i-1]]>=map[str[i]]) sum+=map[str[i-1]];
            
            else sum -= map[str[i-1]];
                  
        }
        
        return sum;
      
      
      
        
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
        cout << ob.romanToDecimal(s) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends