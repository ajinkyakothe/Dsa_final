class Solution {
public:
    string makeGood(string s) {
     stack<char>st;
      for(char c:s)
     {
        if (!st.empty() && abs(st.top() - c) == 32) {
            st.pop();  // remove the bad pair
        } else {
            st.push(c);  // add current char if not a bad pair
        }
    }
        string res = "";
    while (!st.empty()) {
        res = st.top() + res;  // build in reverse order
        st.pop();
    }

    return res;
    }
};