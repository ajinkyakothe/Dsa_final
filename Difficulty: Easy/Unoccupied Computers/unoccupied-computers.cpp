//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(int n, string s) {
      
         unordered_set<char> active;
         unordered_set<char> in_cafe;
         int occupied = 0;
         int walk_away = 0; 
       
        for(char c:s)
        {
            if(active.count(c))
            {  //customer is leaving
                active.erase(c);
                occupied--;
            }
            
            else if (in_cafe.count(c)) {
            // Customer is leaving without getting a computer
            in_cafe.erase(c);
            }
            
            else
            {
                //customer arrives 
                if(occupied<n)
                {
                    active.insert(c);
                    occupied++;
                }
                else
                {
                    walk_away++;
                    in_cafe.insert(c);
                }
            }
        }
        
        
      return walk_away;    
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        cin.ignore();
        string s; 
        getline(cin,s);
        
        Solution obj;
        int res = obj.solve(n, s);
        
        cout<<res<<endl;
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends