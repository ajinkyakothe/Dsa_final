class Solution {
public:
    string reverseParentheses(string s) {
         stack<string> st;
    string curr = "";

    for (char ch : s) {
        if (ch == '(') {
            st.push(curr);  // push current collected string
            curr = "";      // reset for inner part
        }
        else if (ch == ')') {
            reverse(curr.begin(), curr.end());  // reverse inside parentheses
            curr = st.top() + curr;             // append to what was before '('
            st.pop();
        }
        else {
            curr += ch;
        }
    }

    return curr;
    }
};