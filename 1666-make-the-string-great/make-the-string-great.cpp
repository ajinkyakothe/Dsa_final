class Solution {
public:
    string makeGood(string s) {
    
    //simple edge condition for the empty string
    if(s.size()==0) return s;


     //always use the for each loop for the string

     stack<char>st;
     for(char c:s)
     {
        if (!st.empty()) {
                // compare if current and top of stack differ by 32 (case difference)
                if (abs(st.top() - c) == 32) {
                    st.pop();  // good pair, remove both
                } else {
                    st.push(c);
                }
            } else {
                st.push(c);
            }
     }
 
     string res="";
     while(!st.empty())
     {
        char t=st.top();
        res+=t;
        st.pop();
     }
     reverse(res.begin(),res.end());
 
     return res;
    }
};