class Solution {
public:
    string removeStars(string s) {

     stack<char>st;
     vector<char>ch;
     for(char c:s)
     {
        if(!st.empty() && c=='*')
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }

     }
  
     string res="";

     while(!st.empty())
     {
        ch.push_back(st.top());
        st.pop();
     }
     
     for(int i=ch.size()-1;i>=0;i--)
     {
        res+=ch[i];
     } 

     return res;
     


    }
};