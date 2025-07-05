class Solution {
public:

   bool checkstr(string temp1,string temp2)
   {
       if(temp1==temp2) return true;

       return false;

   }


    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
      string test1="",test2="";   

      for(string s:word1)
      {
        test1+=s;
      }

      for(string s:word2)
      {
        test2+=s;
      }

      return checkstr(test1,test2);



    }
};