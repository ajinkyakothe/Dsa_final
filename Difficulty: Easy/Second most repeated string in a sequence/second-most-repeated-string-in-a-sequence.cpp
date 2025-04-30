//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    string secFrequent(string arr[], int n) {
          map<string,int>mp;
        
         //map is ready now consist of string and respective frequency  
         for(int i=0;i<n;i++)
         {
             mp[arr[i]]++;
         }
        
         vector<int>v(n,0);
         
         for(auto it:mp)
         {
             v.push_back(it.second);
         }
         //suppose it is like 3,1,2
         
         sort(v.begin(),v.end()); //now it is like 1,2,3
         
         if (v.size() < 2) return "";
         
         int smaxi=v[v.size()-2];
         
         string res="";
         for(auto it:mp)
         {
            if(it.second==smaxi)
            {
                res=it.first;
                break;
            }
         }
         
         return res;
         
    
          
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    
cout << "~" << "\n";
}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends