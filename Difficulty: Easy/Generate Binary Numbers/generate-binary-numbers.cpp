//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N) {
queue<string>q;
    vector<string>ans;
    q.push("1");
    while(N--){
        string str=q.front();
        q.pop();
        ans.push_back(str);
       q.push(str+"0");
       q.push(str+"1");
    }// Your code here
    return ans;
}



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> ans = generate(n);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends