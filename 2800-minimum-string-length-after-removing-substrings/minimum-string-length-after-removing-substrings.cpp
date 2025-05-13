class Solution {
public:
    int minLength(string s) {
        
    stack<char> st;

    for(char c : s) {
        if(!st.empty() && (
            (st.top() == 'A' && c == 'B') ||
            (st.top() == 'C' && c == 'D')
        )) {
            st.pop();  // remove the matched pair
        } else {
            st.push(c);  // keep the character
        }
    }

    return st.size();
    }
};