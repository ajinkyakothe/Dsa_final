//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    
cout << "~" << "\n";
}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips(string s) {
    
     int n=s.size();
     int case0=0; //for the pattern 010101
     int case1=0; //for the pattern 101010
     
     for(int i=0;i<n;i+=2)
     {
         if(s[i]=='0')
         {
             case1++;
         }
         else
         {
             case0++;
         }
         
         if(i+1<n)
         {
             if(s[i+1]=='0')
             {
                 case0++;
             }
             else
             {
                 case1++;
             }
         }
         
         
     }
    
    
     return min(case0,case1);
     
}