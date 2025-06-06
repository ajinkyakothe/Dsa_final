//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    bool isBalanced(string& s) {
       
       stack<char>st;
       int i=0;
    
       for(ch:s)
       {
           
           if(ch=='(' || ch=='{' || ch=='[')
           {
               st.push(ch);
           }
          
           else
           {
           if(st.empty() || (ch==')' && st.top()!='(') || (ch=='}' && st.top()!='{') || (ch==']' && st.top()!='[') )
           {
               return false;
           }
           st.pop();
           }
           
       }
       
       return st.empty();
       
        
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends