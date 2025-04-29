//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countMinReversals(string s) {
   
          int n = s.size();
    
    if(n % 2 != 0)
    return -1;
    
    stack<char> st;
    
    for(char ch : s){
        if(ch == '{'){
            st.push(ch);
        }
        
        else{
            if(!st.empty() && st.top() == '{'){
                
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    }
    
    
    int opencount = 0, closecount = 0;
    while(!st.empty()){
        if(st.top() == '{')
        opencount++;
        else
        closecount++;
        st.pop();
    }
    
    
    return (opencount + 1)/2 + (closecount + 1)/2;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        Solution sol;
        string s;
        cin >> s;
        cout << sol.countMinReversals(s) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends