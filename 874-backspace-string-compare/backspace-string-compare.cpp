class Solution {
public:

    bool checkstr(string f, string s) {
    return f == s;
    }
  

     string getFinalString(string str)
     {
        stack<char>st;
    
        for(char c:str)
        {
            if(c=='#')
            {
                if(!st.empty()) st.pop();
            }
            else
            {
                st.push(c);
            }
        }
       
        string sg="";

        while(!st.empty())
        {
            char u=st.top();
            sg+=u;
            st.pop();

        }

        reverse(sg.begin(),sg.end());
        return sg;
       

     }
   

    bool backspaceCompare(string s, string t) {
       string first = getFinalString(s);
       string sec = getFinalString(t);

    return checkstr(first, sec);  // simple comparison  
    }
};