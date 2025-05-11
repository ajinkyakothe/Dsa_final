class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0;//pointing the pushed array:
        int j=0;//pointing the popped array:

        for(auto val:pushed)
        {
            pushed[i++]=val;
            while(i>0 && pushed[i-1]==popped[j])
            {
                i--;
                j++;
            }
        }
          return i==0;  //sincee it is the permuatation we will get the i=0

    }
};