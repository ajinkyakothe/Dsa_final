class Solution {
public:
    int evalRPN(vector<string>& t) {
     
      stack<int>st;

      for(int i=0;i<t.size();i++)
      {
        if( t[i]=="+")
        {
            int x=st.top();
            st.pop();
            int y=st.top();
            st.pop();
            st.push((x+y));
            
        }
        else if( t[i]=="*")
        {
            int x=st.top();
            st.pop();
            int y=st.top();
            st.pop();
            st.push((x*y));
        }
         else if(t[i]=="/")
        {
            int x=st.top();
            st.pop();
            int y=st.top();
            st.pop();
            st.push((y/x));
        }
         else if( t[i]=="-")
        {
            int x=st.top();
            st.pop();
            int y=st.top();
            st.pop();
            st.push((y-x));
        }
        else
        {
            st.push(stoi(t[i]));
        }
      }   
  
      int res=st.top();

      return res;
 
            
    }
};