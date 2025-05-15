//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
   int firstpos(vector<int>& arr,int x)
   {
        int s=0,e=arr.size()-1;
        int fo=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            
            if(arr[mid]==x)
            {
                   fo=mid;
                   e=mid-1;
                 
            }
            else if(arr[mid]>x)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return fo;
   }
   
   int lastpos (vector<int>& arr,int x)
   {
        int s=0,e=arr.size()-1;
        int lo=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            
            if(arr[mid]==x)
            {
                 lo=mid;
                 s=mid+1;
            }
            else if(arr[mid]>x)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return lo;
   }
   
   
   
    vector<int> find(vector<int>& arr, int x) {
        vector<int> ans;
        int f=firstpos(arr,x);
        int l=lastpos(arr,x);
        ans.push_back(f);
        ans.push_back(l);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends