class Solution {
public:
    string clearDigits(string s) {

     stack<char>st;
     vector<char>v;
     string res="";

      for(char c:s)
      {
        if(isdigit(c))
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
      }
   
      while(!st.empty())
      {
       v.push_back(st.top());
        st.pop();
      }

      for(int i=v.size()-1;i>=0;i--)
      {
        res=res+v[i];
      }
       
     
       return res;      
    }
};