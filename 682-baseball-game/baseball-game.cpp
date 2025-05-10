class Solution {
public:
    int calPoints(vector<string>& operations) {

      stack<int>st;
         
      
      for(int i=0;i<operations.size();i++)
      {
        if(operations[i]=="+")
        {
            int x=st.top();
            st.pop();
            int y=st.top();
            st.push(x);

            st.push((x+y));
        }
       else if(operations[i]=="D")
        {
            int d=st.top();
            int mul=d*2;
            st.push(mul);
        }
       else if(operations[i]=="C")
        {
            st.pop();
        }
        else
        {
        st.push(stoi(operations[i]));
        }
      }

     int res=0;
     while(!st.empty())
     {
        res+=st.top();
        st.pop();
     }
     
 return res;

    
 
    }
};